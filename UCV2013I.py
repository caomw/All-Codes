from __future__ import division
import math
import fractions

def main():
	while True:
		pi = 3.14159
		r,n = map(int,raw_input().split())
		if not r+n:
			break
		
		print math.ceil(math.ceil(((r/(math.sin(math.pi/(2.0*n))))*1000))/10000)

main()