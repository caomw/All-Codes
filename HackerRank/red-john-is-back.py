from sys import stdin
import math
nex = iter(map(int,stdin.read().split())).next

prm = []
prm.append(0)
prm.append(0)

def isPrime(n):
	if n==0 or n==1:
		return 0
	if n==2:
		return 1
	flag = 1
	for i in xrange(2,n/2+2):
		if(n%i==0):
			flag=0
			break
	return flag

for i in xrange(2,50):
	if isPrime(i):
		prm.append(prm[i-1]+1)
	else:
		prm.append(prm[i-1])

	#print prm[i] ,i


list = []
for i in xrange(50):
	if(i<4):
		list.append(1)
	else:
		list.append(list[i-1]+list[i-4])

t = nex()
for _ in xrange(t):
	n = nex()
	n = list[n]
	print prm[n]