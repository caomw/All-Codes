from sys import stdin
nex = iter(map(int, stdin.read().split())).next

wt = []
parent = []
rank = []

def find(i):
	if parent[i]==i:
		return i
	return find(parent[i])

def Union(x,y,wt):
	xpar = find(x)
	ypar = find(y)

	if xpar!=ypar:
		wt[xpar]+=wt[ypar]
		wt[ypar] = wt[xpar]
		wt[x] = wt[xpar]
		wt[y] = wt[ypar]

	if rank[xpar]<rank[ypar]:
		parent[xpar] = ypar
	elif rank[xpar]>rank[ypar]:
		parent[ypar] = xpar
	else:
		parent[ypar] = xpar
		rank[xpar] +=1

	# parent[x] = xpar
	# parent[y] = ypar



n = nex()
q = nex()

for i in xrange(n):
	wt.append(nex())
	parent.append(i)
	rank.append(0)

for i in xrange(q):

#	print parent
#	print wt

	st = nex()
	ed = nex()
	st-=1
	ed-=1

	Union(st,ed,wt)

	#for i in xrange(n):
	#	wt[i] = wt[find(i)]

	print min(wt)

#print parent
#print wt

