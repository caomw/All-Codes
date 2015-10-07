def knapSack(wt,val,W,N):
	dp =[[] for _ in xrange(N+1)]
 
	for i in xrange(N+1):
		for j in range(W+1):
			dp[i].append(0)
 
	for n in xrange(N+1):
		for w in range(W+1):
			if(w==0 or n==0):
				dp[n][w] = 0
			elif (wt[n-1]<=w):
				dp[n][w] = max(dp[n-1][w],val[n-1]+dp[n-1][w-wt[n-1]])
			else:
				dp[n][w] = dp[n-1][w]
 
 
	n = N
	w = W
	sol =0
	while n>0 and w>0:
		# if dp[n-1][w]>val[n-1]+dp[n-1][w-wt[n-1]]:
		# 	n-=1
		if w-wt[n-1]>=0 and dp[n-1][w]<val[n-1]+dp[n-1][w-wt[n-1]]:
			sol+=wt[n-1]
			w-=wt[n-1]		
		n-=1
 
	# print sol,dp[N][W]
 
	return sol
 
 
def call(N,wt,quer):
	W = quer[3]
 
	val = [1]*N
 
	if W==(knapSack(wt,val,W,N)):
		print "Yes"
	else:
		print "No"
 
n,q = raw_input().split()
n = int(n)
q = int(q)
 
wt = list(map(int,raw_input().split()))
quer = list(map(int,raw_input().split()))
 
if (quer[0]==3):
	call(n,wt,quer)
 