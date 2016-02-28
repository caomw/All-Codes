def main():
	for i in xrange(1):
		n = input()
		lis = map(int,raw_input().split())
		sumi = sum(lis)
		drop = 10**10

		if sumi&1:
			for num in lis:
				if num<drop and num&1:
					drop=num

		if drop!=10**10:
			print sumi-drop
		else:
			print sumi
main()