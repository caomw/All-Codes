def pow_mod(ex,po):
	m = 1000000007
	ans=1
	while po>0:
		if po&1:
			ans=(ans*ex)%m
		ex = (ex*ex)%m
		po>>=1
	return ans


def main():
	for case in xrange(input()):
		n = input()

		if n:
			print pow_mod(2,n-1)
		else:
			print "1"

main()