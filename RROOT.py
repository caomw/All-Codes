from __future__ import division
from math import sqrt

def main():
	for i in xrange(input()):
		s = input()

		print int(((1-(1/(3*sqrt(s/2))))*1000000))/1000000
		

main()