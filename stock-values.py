from sys import stdin
import math
nex = iter(map(int,stdin.read().split())).next

t = nex()
for i in xrange(t):
	n = nex()
	lis = []

	for i in xrange(n):
		lis.append(nex())

	for i in xrange(n/2):
		lis1 = []
		lis2 = []
		lis1.append(lis[i])
		lis2.append(lis[n-1-i])

		if(i>0 and i<n-1 and lis[i+1]%2==0 and lis[i-1]%2==0):
			av = lis[i+1]+lis[i-1]
			av/=2
			lis1.append(av)
	#print lis

		if(n-1-i>0 and n-1-i<n-1 and lis[n-1-i+1]%2==0 and lis[n-1-i-1]%2==0):
			av = lis[n-1-i+1]+lis[n-1-i-1]
			av/=2
			lis2.append(av)

		if abs(min(lis1)-max(lis2))>abs(max(lis1)-min(lis2)):
			lis[i] = min(lis1)
			lis[n-i-1] = max(lis2)
		else:
			lis[i] = max(lis1)
			lis[n-i-1] = max(lis2)
	#print lis
	sum = 0
	for i in xrange(n/2):
		sum+=abs(lis[i]-lis[n-i-1])

	print sum
