def main():
	mod = 1000007
	for case in xrange(input()):
		n = input()
		print ((3*n*(n+1)/2)%mod-n+mod)%mod

main()