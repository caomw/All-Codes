
for _ in xrange(int(raw_input())):
	n = int(raw_input())
	pos = [None]*(n*n + 1)
	for i in xrange(n):
		for j, a in enumerate(map(int, raw_input().split())):
			pos[a] = i, j
	out = 0
	io, jo = pos[1]
	for i in xrange(2, n*n + 1):
		i, j = pos[i]
		out += abs(i - io) + abs(j - jo)
		io, jo = i, j
	print out