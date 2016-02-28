def main():
	for i in xrange(input()):
		n = input()

		if n==0:
			print 3
		elif n==1:
			print 1
		elif n%4==0:
			print n
		elif (n+1)%4==0:
			print n-1
		else:
			print -1

main()