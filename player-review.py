n = int(raw_input())
lis = []
lis = list(map(int,raw_input().split()))

dp = []
dp.append(lis[0])

for i in range(1,n):
	dp.append(dp[i-1]+lis[i])
#print dp
mini = dp[0]
maxi = dp[0]

sum=dp[0]
for i in dp:
	sum=max(sum,maxi-mini)
	maxi = max(maxi,i)
	mini = min(mini,i)
#	print mini,maxi

sum=max(sum,maxi-mini)
if(sum>0):
	print sum
else:
	print 0