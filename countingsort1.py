def main():
	n = input()
	lis = map(int,raw_input().split())

	count = [0]*105

	for i in xrange(n):
		count[lis[i]]+=1

	for i in xrange(100):
		print count[i],


main()
