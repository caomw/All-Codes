import math

lis = [0]*5000007

def markMultiples(vis,k):
	i = 2
	num=i*k
	global lis

	if k%4==1:
		lis[k]=1

	while num <= len(vis):
		vis[num-1] = k

		if k%4==1:
			lis[num]=1

		i+=1
		num=i*k

def SeiveOfEratosthenes(n):
	global lis

	if(n>1):
		vis=[0]*n

		for i in xrange(1,n):
			if not vis[i]:
				markMultiples(vis,i+1)

	return


def main():

	t = int(raw_input())
	SeiveOfEratosthenes(5000005)

	for _ in xrange(t):
		n = int(raw_input())

		if n==2 or lis[n]:
			print "YES"
		else:
			print "NO"
		
main()