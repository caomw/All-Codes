MAX = 31629376
LMT = 5624
LEN = 1952340

flag = []*(MAX/64)
primes = []*LEN
primelen = 0

def sieve():
	global primes,flag,primelen
	for i in xrange(3,LMT,2):
		if not flag[i>>6]&(1<<((i>>1)&31)):

			k = i<<1

			for j in xrange(i*i,j<MAX,k):
				flag[j>>6]|=(1<<((j>>1)&31))

		j=0
		primes[j] = 2
		j+=1

		for j in xrange(3,j<MAX,k):
			primes[j]=i
			j+=1

		primelen = j

def factor(n):
	while i<primelen and sqrt(primes[i])<=n:
		if not n%primes[i]:
			cnt+=1
			n/=primes[i]
		print ("{0}^{1}".format(primes[i],cnt))
		f = 1

	if n>1:
		print ("{0}^1".format(n))

def main():
	sieve()
	n = input()
	factor(n)

	while n:
		n = input()
		if n:
			factor(n)
