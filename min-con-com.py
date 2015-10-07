from sys import stdin 
nex = iter(map(int,stdin.read().split())).next

n = nex()
q = nex()

wt = []
parent = []

def find(parent,x):
	if not parent[x]:
		return x
	return find(parent,parent[x])

def union(parent,x,y,wt):

	xpar = find(parent,x)
	ypar = find(parent,y)

	if(xpar!=ypar):
		wt[ypar] += wt[xpar]
		wt[xpar] = wt[ypar]

	parent[ypar] = xpar

	print wt[xpar],wt[ypar]

	
for i in xrange(n):
	wt.append(nex())
	parent.append(0)

for _ in xrange(q):
	st = nex()
	ed = nex()
	st-=1
	ed-=1
	union(parent,st,ed,wt)
	
	for i in xrange(n):
		print find(parent,i+1)+1,

	print""
	print min(wt)
	print ""