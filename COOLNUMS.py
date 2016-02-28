def knapsack(wt,W):
	knap = []
	for i in xrange

	for i in xrange(len(wt)+1):
		for w in xrange(W+1):
			if 
def cool():
	count=0
	
	for i in xrange(n,m+1):
		lis = []
		sumi = 0

		while i:
			sumi+=i%10
			lis.append(i%10)
			i/=10

		if not sumi%2:
			count+=knapsack(wt,sumi/2)
	
	return count

def main():

	n,m = map(int,raw_input().split())

	while n+m:
		print cool(n,m)

		n,m = map(int,raw_input().split())

main()