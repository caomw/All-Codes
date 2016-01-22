def main():
	for i in xrange(int(raw_input())):
		n = int(raw_input())

		reqItems = []

		reqItems = map(int,raw_input().split())
		spDisc = []

		m = int(raw_input())
		for i in xrange(m):
			# spDisc.append([])
			spDisc.append(map(int,raw_input().split()))
			spDisc[i] = spDisc[i][1:len(spDisc[i])]
			spDisc[i].sort()
		print spDisc

		for j in xrange(m-1,-1,-1):	
			print spDisc[j]


main()