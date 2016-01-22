from math import sqrt,ceil

def main():
	for case in xrange(input()):
		n = input()
		sumi = 0
		for x in xrange(1,n+1,1):
			y = n/x 
			sumi+=(x*y)%1000000007

		print sumi
		#print ""
main()