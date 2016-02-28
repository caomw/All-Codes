def main():
	a = [0]
	for i in xrange(1,10**8):
		a.append(a[i-1]^i)

	xori=[0]
	for i in xrange(1,10**8):
		xori.append(a[i]^xori[i-1])

	for i in xrange(input()):
		a,b = map(int,raw_input().split())
		print xori[a-1]^xori[b]

main()