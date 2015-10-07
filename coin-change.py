from sys import stdin
inp = iter(map(int,stdin.read().split())).next

n = inp()
m = inp()

list = []

def cnt(list,n,m):
	dp = [[0 for i in xrange(m)] for i in xrange(n+1)]

	for i in xrange(m):
		dp[0][i] = 1

	for i in xrange(1,n+1):
		for j in xrange(m):
			x,y=0,0

			if j>=1:
				y = dp[i][j-1]

			if i>=list[j]:
				x = dp[i-list[j]][j]
			dp[i][j]=x+y


	return dp[n][m-1]

for _ in xrange(m):
	num = inp()
	if num<=n:
		list.append(num)
	else:
		m-=1

if not m:
	print m
else:
	print cnt(list,n,m)
