from sys import stdin
nex = iter(map(int,stdin.read().split())).next

t = nex()

for _ in xrange(t):
	n = nex()
	cmp = nex()

	list = [[[0 for x in xrange(n)] for x in xrange(n)] for x in xrange(cmp)]
	print list[0][0][0]