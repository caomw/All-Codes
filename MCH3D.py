from math import sqrt
n, q = map(int, raw_input().split())

x = list()
y = list()
z = list()

for i in xrange(n):
	xi,yi,zi = raw_input().split()
	x.append(float(xi))
	y.append(float(yi))
	z.append(float(zi))

for _ in xrange(q):
	sum = 0;
	sum = float(sum)
	a,b,c,d = raw_input().split()
	a=float(a)
	b=float(b)
	c=float(c)
	d=float(d)

	for i in xrange(n):
		for j in xrange(n):
			if i==j:
				continue
			else:
				sum+=abs(a*(x[i]-x[j]) + b*(y[i]-y[j]) + c*(z[i]-z[j]) + d)/((n*(n-1)*sqrt((x[i]-x[j])**4+(y[i]-y[j])**4+(z[i]-z[j])**4)))
	print sum