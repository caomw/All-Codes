from math import sqrt

def main():
	for i in xrange(input()):
		q1,q2,q3 = map(int ,raw_input().split())

		n=int((-1+int(sqrt(1+8*q3)))/2)
		d = int((q1-q2)/(6-n))
		a = q1 - 2*d

		print n
		for i in xrange(n):
			print (a+i*d),
		print ""


main()