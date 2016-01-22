def gcd(a,b):
	if b==0:
		return a
	return gcd(b,a%b)

def main():
	lis = []

	n = raw_input()
	while n=="":
		n = raw_input()

	for i in xrange(int(n)):
		k = raw_input()

		while k=="":
			k = raw_input()

		lis.append(int(k))
		if i==2:
			GCD = gcd(GCD,lis[i]-lis[i-1])
		elif i==1:
			GCD = lis[1]-lis[0]

	cumu=0
	for i in xrange(1,len(lis)):
		cumu+=(lis[i]-lis[i-1])/GCD

	print cumu-len(lis)+1


		

main()
