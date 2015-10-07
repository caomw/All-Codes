def main():
	t = int(raw_input())
	for _ in xrange(t):
		n = int(raw_input())
		lis = list(map(int,raw_input().split()))

		cnt = 1
		total = 0
		for i in xrange(1,n):
			if lis[i-1]<=lis[i]:
				cnt+=1
				
			else:
				total+=cnt*(cnt+1)//2
				cnt = 1
				
		total+=cnt*(cnt+1)//2
		
		print total

main()
