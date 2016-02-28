def main():
	for _ in xrange(input()):
		n = input()

		if n<7:
			print -1
			continue
		print 5+(2*(n-6))

		print 1,2
		print 3,4
		print 2,5
		print 3,5
		print 5,6

		for i in xrange(7,n+1):
			print 2,i
			print 3,i
		print n

main()

