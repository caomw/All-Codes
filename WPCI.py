from fractions import gcd

def main():
	for i in xrange(input()):
		n,m = map(int,raw_input().split())
		GCD = gcd(n,m)
		n/=GCD
		m/=GCD

		print n*m

main()
