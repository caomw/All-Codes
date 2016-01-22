from __future__ import division
from math import sin,cos

a=b=c=0

def f(x):
	return a*x+(b*sin(x))-c

def get6(x):
	x = x*1000000
	x = int(x)
	x/=1000000
	return x

def bMethod(st,ed):
	#print st,ed
	#print f(st),f(ed)
	#print ""

	if get6(f(st))==get6(f(ed)):
		return round(st, 6)

	m = st+(ed-st)/2

	if f(st)*f(m)<0:
		return bMethod(st,m)
	else:
		return bMethod(m,ed)


def main():
	global a,b,c
	for i in xrange(input()):
		a,b,c= map(int,raw_input().split())
		

		print bMethod(0,100005)

main()