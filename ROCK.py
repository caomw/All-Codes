def find(stri,n):
	ones = []
	flag = []
	hashi = []

	for i in xrange(n):
		ones.append([])
		flag.append([])
		hashi.append([])

		for j in xrange(n):
			ones[i].append(0)
			flag[i].append(0)
			hashi[i].append(0)

	for i in xrange(n):
		for j in xrange(i,n):
			if i!=j:
				ones[i][j]=ones[i][j-1]
				
			if stri[j]=="1":
					ones[i][j]+=1

			if 2*ones[i][j]>j-i+1:
				flag[i][j] = j-i+1

	print rec(flag,0,n-1)

	max_len = 0

def rec(flag,i,j):
	if i>j:
		return 0

	if  i==j or flag[i][j]:
		return flag[i][j]

	for k in xrange(i,j):
		a = b = 0

		if flag[i][k]:
			a = flag[i][k]
		else:
			a = rec(flag,i,k)

		if flag[k+1][j]:
			b = flag[k+1][j]
		else:
			b = rec(flag,k+1,j) 

		flag[i][j] = max(flag[i][j],
			a+b)

	return flag[i][j]


def main():
	for i in xrange(input()):
		n = input()
		stri = raw_input()

		find(stri,n)

main()