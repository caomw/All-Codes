n =int(raw_input())
a = (raw_input().split())
a = map(int,a) 

m =int(raw_input())
b= (raw_input().split())
b = map(int,b)

myset1 = set(a)
myset2 = set(b)
a1=a
a = myset1.difference(b)
b = myset2.difference(a1)
a = a.union(b)

a = sorted(a)

for i in xrange(len(a)):
	print a[i]