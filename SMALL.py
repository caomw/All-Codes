def main():
	for i in xrange(input()):
		n = input()

		ans = 1
		for i in xrange(n,0,-1):
			if ans % i:
				ans=(i*ans)%1000000007

			ans%=1000000007

		print ans
main()
#1 2 3 4 5 6
