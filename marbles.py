from math import factorial
def main():
	for case in xrange(input()):
		n,k = map(int,raw_input().split())
		ans = 1
		
		for i in xrange(n-1,k-1,-1):
			ans*=i
		
		print ans/factorial(n-k)

main()