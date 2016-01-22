def main():
	for i in xrange(input()):
		r,c = (raw_input().split())
		r = int(r)
		c = int(c)

		if r<=c:
			if r&1:
				print "R"
			else:
				print "L"
			continue

		else:
			if c&1:
				print "D"
			else:
				print "U"
		
main()