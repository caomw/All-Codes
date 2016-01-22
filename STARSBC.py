n = 2147483647
n = 18
count = 0

for i in xrange(1,n):
	if (n/i)*i + i == n+1:
		print i
		count+=1

print count