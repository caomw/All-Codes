from itertools import imap
from sys import stdin

def knapsack(lis):
	count=[0]*105

	for e in lis:
		if count[e]:
			return 1
		count[e]+=1

	SUM = sum(lis)/2+1
	n = len(lis)

	sumi = [0]*(sum(lis)+1)
	sumi[0] = 1

	sum_so_far = 0

	for i in xrange(n):
		for j in xrange(sum_so_far+lis[i],lis[i]-1,-1):
			if SUM>=j and sumi[j-lis[i]]:
				if sumi[j]:
					return 1
				sumi[j] = 1 

		sum_so_far+=lis[i]

	return 0

def main():
	dstream = imap(int, stdin.read().split())
	for i in xrange(next(dstream)):
		
		n = next(dstream)
		lis = [next(dstream) for _ in xrange(n)]


		if knapsack(lis):
			print "YES"
		else:
			print "NO"
main()