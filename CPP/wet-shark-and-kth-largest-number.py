from sys import stdin
nex = iter(map(int,stdin.read().split())).next

n = nex()
q = nex()

lis = []
for i in xrange(n):
	lis.append(nex())
	
for i in xrange(q):
	l = nex()
	k = nex()
	cnt = 0
	for i in xrange(n):
		if(lis[i]>=l):
			cnt+=1
			if(cnt==k):
				break
	print lis[i]
