def preCal():
	hash_ = []
	for i in xrange(100000):
		index = (i*(i+1))*3 + 1

		if index>100000005:
			break

		hash_.append(index)

	return hash_


def main():
	hash_ = preCal()

	while True:
		n = input()

		if n==-1:
			break

		if n in hash_:
			print "Y"
		else:
			print "N"


main()