from math import log
def main():
	for i in xrange(input()):
		n = input()

		sumi=0.0
		count=0
#		for j in xrange(1,n+1,1):
		while sumi<=n:
			count+=1
			sumi += log(count,10)

		print count-1

main()