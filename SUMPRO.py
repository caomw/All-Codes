from math import sqrt,ceil

def main():
	for case in xrange(input()):
		n = input()
		sumi = 0
		batch_sum = 0
		mod = 1000000007

		x = int(ceil(sqrt(n)))
		oldy = y = (n/x)

		if x*x == n:
			sumi = (sumi + (x*y)%1000000007)%1000000007
		
		root = int(ceil(sqrt(n)))
		for x in xrange(root-1,0,-1):
			y = (n/x)
			sumi = (sumi + (x*y)%1000000007)%1000000007
			oldy+=1

			if oldy>=root:
				batch_sum = (((2*(oldy) + y-oldy)%1000000007)*((y-oldy+1)%1000000007))%1000000007
				batch_sum /=2
				sumi = (sumi + (x*batch_sum)%1000000007)%1000000007

		#	print oldy,y,batch_sum,x
			oldy = y
		
		print sumi
		#print ""
main()