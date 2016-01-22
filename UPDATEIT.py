def main():
	for case in xrange(input()):
		n,updates = map(int,raw_input().split())
		lis = list()
		for i in xrange(n+1):
			lis.append(0)

		for update in xrange(updates):
			l,r,val = map(int,raw_input().split())
			lis[l] +=val
			lis[r+1] -=val

		for i in xrange(1,n+1,1):
			lis[i] += lis[i-1]

		for i in xrange(input()):
			print lis[input()]


main()