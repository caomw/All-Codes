from sys import stdin
nex = iter(map(int,stdin.read().split())).next

n = nex()
list = []

lt = []
rt = []

for i in xrange(n):
	list.append(nex())
	lt.append(1)
	rt.append(1)

for i in xrange(1,n):
	if(list[i]>list[i-1]):
		lt[i] = lt[i-1] + 1

for i in xrange(n-2,-1,-1):
	if(list[i]>list[i+1]):
		rt[i] = rt[i+1] + 1

for i in xrange(n):
	list[i] = max(lt[i],rt[i])

print sum(list)

