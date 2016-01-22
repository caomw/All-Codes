def getEven(lis):
	n = len(lis)

	W = sum(lis)/2

	if 2*W != sum(lis):
		return 0

	k = []
	for i in xrange(n+1):
		k.append([])
		for j in xrange(W+1):
			k[i].append(-1)

	for i in xrange(n+1):
		for w in xrange(W+1):
			if w==0 or i==0:
				k[i][w] = 0
			elif lis[i-1]<=w:
				k[i][w] = max(lis[i-1]+k[i-1][j-lis[i-1]],k[i-1][j])
			else:
				k[i][w] = k[i-1][w]

	return k[n][w]


def main():
	for i in xrange(input()):
		n = input()
		lis = map(int,raw_input().split())
		hash_ = [0]*105

		for i in xrange(n):
			if hash_[lis[i]]:
				hash_[lis[i]]-=1
			else:
				hash_[lis[i]]+=1
		lis = []

		for i in xrange(len(hash_)):
			while hash_[i]:
				lis.append(i)
				hash_[i]-=1

		#print lis

		if getEven(lis):
			print "YES"
		else:
			print "NO"

main()