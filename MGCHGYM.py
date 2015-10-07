def solve(b, n,memo):
    if(n < 0):
    	return 0;
    
	if(memo[b][n] == -1):

		memo[b][n] = solve(b,n-1)
		if(price[n] <= b):
			memo[b][n] = max(memo[b][n],fun[n] + solve(b-price[n],n-1))   
    
    return memo[b][n]




def knapSack(wt,val,W,N):
	# dp =[[] for _ in xrange(N+1)]
	# for i in xrange(N+1):
	# 	for j in 
 	
 	dp = [[]]
	for i in xrange(N+1):
		dp.append([])
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
 
	# print sol,dp[N][W],wt
 
	return sol
 
 
def call(N,wt,quer):
	W = quer[3]
 
 	lis = wt[quer[1]-1:quer[2]]
 	N = 1-quer[1]+quer[2]

 	print lis,N

	val = [1]*N
 	
	memo = [[]]
	for i in xrange(100005):
		memo.append([])
		for j in xrange(100005):
			memo[i].append(-1)

	F = solve(B,N-1)
	lo = 0
	hi = B

	while(lo < hi):
		mi = (lo + hi)>>1;

		if(solve(mi,N-1,memo) < F):
			lo = mi+1;
		else:
			hi = mi


	if W==(knapSack(lis,val,W,N)):
		print "Yes"
	else:
		print "No"
 
n,q = raw_input().split()
n = int(n)
q = int(q)
 
wt = list(map(int,raw_input().split()))

for _ in xrange(q): 
	quer = list(map(int,raw_input().split()))
	
	if (quer[0]==3):
		call(n,wt,quer)

	elif (quer[0]==2):
		lis = wt[quer[1]-1:quer[2]]
		lis1 = wt[0:quer[1]-1]
		lis2 =  wt[quer[2]:n]
		lis.reverse()
		
		wt = lis1+lis+lis2
		# print wt

	elif (quer[0]==1):
		wt[quer[1]-1]=quer[2]
		# print wt
			