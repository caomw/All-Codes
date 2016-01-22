def prod(CA,RB,n):
	sumi=0
	for i in xrange(n):
		sumi+=CA[i]*RB[i]

	return sumi

def main():
	n = input()
	k = raw_input()
	A = []
	CA = []

	for i in xrange(n):
		lis = map(int,raw_input().split())
		k = raw_input()
		A.append(lis)

	B = []
	RB = []
	
	for i in xrange(n):
		lis = map(int,raw_input().split())
		#k = raw_input()
		B.append(lis)

	for i in xrange(n):
		CA.append(0)
		RB.append(0)
		for j in xrange(n):
			CA[i]+=(A[j][i])
			RB[i]+=(B[i][j])

	# print A
	# print B
	# print ""
	# print CA
	# print RB

	q = input()
	for query in xrange(q):
		#k = raw_input()
		lis = raw_input().split()
		
		i = int(lis[1])
		j = int(lis[2])
		val = int(lis[3])
		
		if lis[0]=='A':
			preVal = A[i][j]
			CA[j]-=preVal
			CA[j]+=val

		elif lis[0]=='B':
			preVal = B[i][j]
			RB[i]-=preVal
			RB[i]+=val

		print prod(CA,RB,n)
			


main()
