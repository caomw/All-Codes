def main():
	for i in xrange(int(raw_input())):
		p1,p2,m = map(int,raw_input().split())

		pile = min(p1,p2)
		offset = abs(p1-p2)

		m = (m * (m+1))/2
		ans = pile-m

		if ans<0:
			ans=0

		print ans*2+offset

main()
