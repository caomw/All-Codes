def LCS(st1,st2):
	l1 = len(st1)
	l2 = len(st2)

	dp = [[0]*(l1+1)]*(1+l2)

	for i in range(l2+1):
		for j in range(l1+1):
			if(i==0 or j==0):
				dp[i][j] = 0
			
			elif st2[i-1]==st1[j-1]:
				dp[i][j] = 1+dp[i-1][j-1]
			
			else:
				dp[i][j] = max(dp[i][j-1],dp[i-1][j])

	return dp[l2][l1]

def main():
	st1 = raw_input()
	st2 = raw_input()

	if(len(st1)<len(st2)):
		print LCS(st1,st2)
	else:
		print LCS(st2,st1)

main()