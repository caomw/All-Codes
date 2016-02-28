for i in xrange(input()):
	n = input()
	x = n
	y = 1

	while x>y:
		x = (y+x)/2
		y = n/x

	print x
