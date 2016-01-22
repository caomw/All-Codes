import random

print 10
for case in xrange(10):
	n = random.randint(1,1000)
	print n

	for i in xrange(n):
		print (random.randint(1,10000))

