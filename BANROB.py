mon = 81#**9
t = raw_input()
t = int(t)
for _ in xrange(t):
	m,p = raw_input().split();
	m = int(m)
	p = float(p)

	if m%2:
		fir=mon*(1+p**m)
	else:
		fir=mon*(1-p**m)
	fir/=(1+p)

	print fir, mon-fir
