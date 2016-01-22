def main():
	for case in xrange(input()):
		n = input()
		lis = map(int,raw_input().split())
		lis = lis[::-1]

		cumu = [lis[0]]
		sumi = 0

		for i in xrange(1,len(lis),1):
			cumu.append(cumu[i-1]+lis[i])
			sumi+=cumu[i-1]-lis[i]*i

		print sumi

main()