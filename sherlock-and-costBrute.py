
t = int(input())

for _ in range(t):
	n = int(input())

	dp=[[0]*2]*(n)
	b = list(map(int,input().split()))

	for i in range(0,n-1):
		dp[i+1][0]=max(dp[i][0],dp[i][1]+abs(b[i]-1))
		dp[i+1][1]=max(dp[i][0]+abs(b[i+1]-1),dp[i][1]+abs(b[i]-b[i+1]))

	print (max(dp[n-1][0],dp[n-1][1]))