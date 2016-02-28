from sys import stdin
from itertools import imap

def find(reltn,i,lim,flag=0):
	if flag:
		print reltn[i],i

	if reltn[i][0]<=lim:
		return i
	
	if reltn[i][0]==i:
		return -i

	return find(par,reltn[i][0],lim)

def union(reltn,x,y):
	
	if y>x:
		y=find(par,y,x)
		if y<0:
			y*=-1
			

	else:
		if px<py:
			pass

def mark():
	dstream = imap(int,stdin.read().split())
	n = next(dstream)
	reltn = [[i,i] for i in xrange(n+5)]

	for i in xrange(n-1):
		x = next(dstream)
		y = next(dstream)

		union(reltn,x,y)

#	find(par,3,1)

mark()
