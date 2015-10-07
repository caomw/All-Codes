def main():
	t = int(raw_input())
	for _ in xrange(t):
		n = int(raw_input())
		st1 = raw_input()
		st2 = raw_input()

		cnt = 0
		for i in xrange(n):
			if(st1[i]==st2[i]):
				cnt+=1

		lis = list(map(int,raw_input().split()))

		lis1 = lis[0:cnt+1]

		if cnt==n:
			print lis[n]
		else:
			print max(lis1)
main()