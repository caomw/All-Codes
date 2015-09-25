from sys import stdin
nex = iter(map(int,stdin.read().split())).next

t = nex()

for _ in xrange(t):
	n = nex()
	k = nex()

	it = 0 
	for i in xrange(n):
		if (nex()<=0):
			it+=1

	if k<=it:
		print "NO"
	else:
		print "YES"