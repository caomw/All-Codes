t = int(raw_input())
for i in range(t):
	lis = list(map(int,raw_input().split()))
	n = lis[0]
	lis.pop(0)

	lis = sorted(lis)
	
	sum1=0
	sum2=0

	print lis

	lev = 1
	i=0
	while 1:
		if(i>n-i-1):
			break

		if lev:
			sum1+=lis[i]+lis[n-i-1]
			lev = 0
		else:
			sum2+=lis[i]+lis[n-i-1]
			lev = 1
		i+=1


	print abs(sum1-sum2)