def slidingWindow(lis,m):
	globalmax = curMax = st = 0

	for end in xrange(len(lis)):

		if curMax<=m:
			globalmax = max(globalmax,curMax)

		curMax+=lis[end]

		if globalmax==m:
			break

		while curMax>m:
			curMax-=lis[st]
			st+=1
			#print st,end,curMax

		if curMax<=m:
			globalmax = max(globalmax,curMax)
			

		#print st,end,curMax

#	print st,len(lis)-1,curMax

	return globalmax





def main():
	n,m = map(int,raw_input().split())
	lis = map(int,raw_input().split())

	print slidingWindow(lis,m)
main()