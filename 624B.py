def main():
	n = input()
	lis = map(int,raw_input().split())
	lis.sort()
	counti = 0
	mini=lis[len(lis)-1]

	for i in xrange(n-2,-1,-1):
		lis[i] = min(mini-1,lis[i])

		if lis[i]>0 or 1:
			mini=lis[i]
		elif 0:
			break

	print sum(lis)
main()

