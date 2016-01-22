def pow_mod(ex,po,m):
	ans=1 
	while po>0:
		if po&1:
			ans=(ans*ex)%m
		ex = (ex*ex)%m
		po>>=1
	return ans

def main():
	for case in xrange(input()):
		n,p = map(int,raw_input().split())

		if n>=p:
			print "0"
		else:
			result = 1
			for i in xrange(n+1,p,1):
				#temp = pow_mod(i,p-2,p)
				result = (result*i)%p

			result = pow_mod(result,p-2,p)
			print -result+p

main()
