from math import log,pow
def main():
	for case in xrange(input()):
		k,n = map(int, raw_input().split())
		level = int(log(n,2))+1
		mul = 1

		#if level%2:
	#		mul = -1

		children = int(pow(2,level))

		while n>1:
			children/=2

			if n>children:
				mul*=-1
				n-=children
		
		if n==1:
			mul *=-1

		if mul==-1:
			print "Male"
		else:
			print "Female"





main()