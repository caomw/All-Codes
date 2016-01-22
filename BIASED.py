def bs(lis,k,i,j,n):
	if i<0 or j>=n:
		return 0

	if lis[i]==k or lis[j]==k:
		return 1
	
	if i==j:
		return 0

	mid = (i+j)/2
	return bs(lis,k,i,mid,n)+bs(lis,k,1+mid,j,n)

def main():
	for case in xrange(input()):
		te = raw_input()
		n = input()
		index = [0]*(n+1)
		numbers = []

		lis = []

		for i in xrange(n):
			a,num = raw_input().split(" ")
			num = int(num)

			if not index[num]:
				index[num]=num
			else:
				numbers.append(num)

		#print (numbers)

		k=1
		badness=0
		for i in numbers:
			while index[k] and k<n+1:
				k+=1
			if k<n+1:
				index[k]=i
				badness+=abs(i-k)

		print badness

main()
