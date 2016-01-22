def main():
	for i in xrange(input()):
		n = input()
		lis = []
		for j in xrange(n):
			lis.append(raw_input())

		lis.sort()

		count = 1
		for i in xrange(1,len(lis)):
			if lis[i]==lis[i-1]:
				count+=1
			else:
				print lis[i-1],count
				count = 1

		print lis[-1],count
		print ""
		count = 1


		raw_input()

main()
