def main():
	a = raw_input()
	b = raw_input()
	c = raw_input()

	counta = [0]*(27)
	for i in xrange(len(a)):
		counta[ord(a[i])-ord('a')]+=1

	countb = [0]*27
	for i in xrange(len(b)):
		countb[ord(b[i])-ord('a')]+=1

	countc = [0]*27
	for i in xrange(len(c)):
		countc[ord(c[i])-ord('a')]+=1

	mini = 10**7
	for i in xrange(26):
		if countb[i]:
#			print i,counta[i]/countb[i]
			mini = min(mini,counta[i]/countb[i])

	minib = mini

#	print "hey"
#	print "c="
	mini = 10**7
	for i in xrange(26):
		if countc[i]:
#			print i,counta[i]/countc[i]
			mini = min(mini,counta[i]/countc[i])

	minic = mini

#	print "mini="
	#print minib,minic
	if minib>minic:
		#print counta
		#print countb
		#print minib
		for i in xrange(26):
			if countb[i]:
				counta[i]-=minib*countb[i]


		stri = ""
		for i in xrange(minib):
			stri+=b
#		print stri
		mini = 10**7
		for i in xrange(26):
			if countc[i]:
				mini = min(mini,counta[i]/countc[i])

		if mini<0:
			mini = 0

		for i in xrange(26):
			if countc[i]:
				counta[i]-=mini*countc[i]

		for i in xrange(mini):
			stri+=c
		#print "c"
		#print stri

	else:
		for i in xrange(26):
			if countc[i]:
				counta[i]-=minic*countc[i]

		stri = ""
		for i in xrange(minic):
			stri+=c

		mini = 10**7
		for i in xrange(26):
			if countb[i]:
				mini = min(mini,counta[i]/countb[i])

		if mini<0:
			mini = 0

		for i in xrange(26):
			if countb[i]:
				counta[i]-=mini*countb[i]

		for i in xrange(mini):
			stri+=b

	for i in xrange(26):
		stri+=counta[i]*chr(i+97)

	print stri

main()

