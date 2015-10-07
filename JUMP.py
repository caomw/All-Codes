import sys
n = int(raw_input())

if n>5005:
	sys.exit()

P = list(map(int,raw_input().split()))
A = list(map(int,raw_input().split()))
H = list(map(int,raw_input().split()))

# 1 2 3 4 5
# a b c d e
# 1 2 3 4 5

dp = []
for i in xrange(n+5):
	dp.append(10000000000)


dp[0] = A[0]
for st in xrange(n):
	for ed in xrange(st,n):
		if(P[st]<P[ed]):
			dp[ed] = min(dp[st]+A[ed]+(H[st]-H[ed])**2,dp[ed])

print dp[n-1]