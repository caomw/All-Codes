def main():
	t = input()
	t = int(t)

	for i in range(t):
		n = input()
		n = int(n)

		lis = list(map(int,input().split()))

		dp = [0]*(n+10)
		sumi=0
		for i in range(n-1,-1,-1):
			sumi += lis[i]

			dp[i] = sumi - min(min(dp[i+1],dp[i+2]),dp[i+3])
		print (dp[0])

main()


