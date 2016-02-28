def modpod(base,exp,mod):
	if exp==1:
		return base
	if exp&1:
		return (base*(modpod(base,(exp-1)/2,mod)**2))%mod

	return ((modpod(base,exp/2,mod)**2))%mod


def main():
	mod = (10**9)+7
	calc = []
	for i in xrange((10**5)+1):
		calc.append(modpod(i,mod-2,mod))

	for i in xrange(input()):
		n,x,m = map(int,raw_input().split())
		lis = map(int,raw_input().split())

		sumi = 0

		pre = 1
		for i in xrange(x):
			sumi = (sumi+(pre*lis[x-1-i]))%mod
			pre = (pre*(m+i))%mod
			pre = (pre*calc[i+1])%mod
 
		print sumi%mod
main()