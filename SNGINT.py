def main():
	for i in xrange(input()):
		n = input()

		if not n:
			print "10"
			continue

		if n<10:
			print n
			continue

		stri = []

		for i in xrange(9,1,-1):
			if n==1:
				break

			while not n%i:
				n/=i
				stri.append(i)

		k = ""

		for i in xrange(len(stri)-1,-1,-1):
			k+=str(stri[i])

		if n!=1:
			print "-1"
		else:
			print k

main()
