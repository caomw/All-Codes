from sys import stdin
nex = iter(map(int,stdin.read().split())).next

t = nex()

for _ in xrange(t):
	n = nex()

	list = []
	for i in xrange(n):
		list.append(nex())

	maxi = 0
	sum = 0
	for i in xrange(n-1,-1,-1):
		maxi = max(maxi,list[i])
		sum += maxi - list[i]

	print sum
