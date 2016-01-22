
mod = 109546051211
def factorial(n):
	t = 1
	for i in xrange(1,n+1):
		t = (t*i)%mod 

	return t%mod

def main():
	n = input()

	if n>=186583:
		print "0"
		return

	i=1
	prod=1
	while i<=n and prod!=0:
		prod=(prod*factorial(i))%mod
		i+=1

	print prod

main()