import math

val = 1
lis=[0]*100005
flag = 1
for i in xrange(100005):
	root = int(math.sqrt(i+1))
	sq = root**2

	if i+1 >sq+root and flag:
		val+=1
		flag=0

	lis[i]=val

	if i+1==sq :
		val+=1
		flag=1

t = int(raw_input())

for _ in xrange(t):
	n = int(raw_input())

	print lis[n-1]
