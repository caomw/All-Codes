import sys
def markMultiples(k,n,vis):
	i = 1
	while i*k<n:
		vis[i*k]=1
		i+=1

	return vis

def sieve(n):
	vis=[0]*n

	i=2
	while i**3<n:
		if not vis[i**3]:
			vis=markMultiples(i**3,n,vis)
		i+=1

	return vis

def main():
	vis = sieve(1000005)

	for case in xrange(input()):
		k = raw_input()
		n = input()
		if not vis[n]:
			print "Case",case+1,
			sys.stdout.write(": ")
			print n
		else:
			print "Case",case+1,": Not Cube Free"
main()