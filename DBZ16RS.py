def main():
	t = input()
	for i in xrange(t):
		n = input()
		hashi = [0]*((10**5)+9)
		lis = map(int,raw_input().split())

		for i in lis:
			hashi[i]+=1

		odds = 0
		evens = 0
		'''
		for i in xrange((10**5)+9):
			if not hashi[i]:
				continue
			if i&1:
				odds+=1
			else:
				evens+=1
		'''
		for i in lis:
			if i&1:
				odds+=1
			else:
				evens+=1

		print (evens*odds)+((evens*(evens-1))/2)

main()