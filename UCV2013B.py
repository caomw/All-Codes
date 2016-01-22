def pow_mod(ex,po,m):
	ans=1 
	while po>0:
		if po&1:
			ans=(ans*ex)%m
		ex = (ex*ex)%m
		po>>=1
	return ans

def main():
	p =1000000007
	while True:
		r,n = map(int,raw_input().split())
		if not r+n:
			break
		ans = 1
		ans = pow_mod(r,n,p)-1
		ans = (ans * pow_mod(r-1,p-2,p))%p
		ans = (r*ans)%p

		print ans
main()