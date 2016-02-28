def main():
	n = input()
	lis = []
	lisSort = []

	lisSort = map(int,raw_input().split())

	for i in xrange(n):
		lis.append(lisSort[i])

	lisSort.sort()

	for i in xrange(n):
		j=n-1
		while j>-1:
			if lis[i]==lisSort[j]:
				print n-j,
				j=-1
			j-=1


main()
