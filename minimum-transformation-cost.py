from sys import stdin
nex = iter(stdin.read().split()).next

t = int(nex())
for _ in xrange(t):
	s1 = nex()
	s2 = nex()

	a = int(nex())
	b = int(nex())
	c = int(nex())
	c = min(c,a+b)

	lis = []
	lis1 = []
	lis2 = []
	for i in xrange(26):
		lis.append(0)

	for i in xrange(len(s1)):
		lis[ord(s1[i])-ord("a")]+=1

	for i in xrange(len(s2)):
		lis[ord(s2[i])-ord("a")]-=1

	dist1=0
	dist2=0
	for i in xrange(26):
		if(lis[i]>0):
			lis1.append(lis[i])
			lis2.append(0)
		else:
			lis2.append(-lis[i])
			lis1.append(0)

		if lis1[i]>0:
			dist1+=lis1[i]
		if lis2[i]>0:
			dist2+=lis2[i]

	cost=min(dist1,dist2)*c

	if(dist1-dist2>0):
		cost+=a*(dist1-dist2)
	else:
		cost-=b*(dist1-dist2)

	print cost

	#print lis1,dist1
	#print lis2,dist2
	#print ""
