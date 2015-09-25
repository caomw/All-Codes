from sys import stdin
nex = iter(map(int,stdin.read().split())).next

list = []
for i in xrange(50):
	if(i<4):
		list.append(1)
	else:
		list.append(list[i-1]+list[i-4])

t = nex()

for _ in xrange(1):
	n = nex()
	