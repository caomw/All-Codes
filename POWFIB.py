mod = 1000000007

def powr(a,b):
	ans = 1

	while b>0:
		if b&1:
			ans = (ans*a)%mod
		
		a = (a*a)%mod
		b/=2

	return ans

def nthFib():
	lis= [1,1,1]
	
	for i in xrange(3,mod):
		lis.append((lis[i-2]+lis[i-1])%mod)
	#print lis

nthFib()
