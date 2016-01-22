def countSort(lis):
	RANGE = (max(lis)-min(lis))
	output= [0]*(RANGE+1)
	print RANGE
	count = [0]*(RANGE+1)

	for i in xrange(len(lis)):
		count[lis[i]-min(lis)]+=1

	for i in xrange(1,RANGE+1):
		count[i]+=count[i-1]

	for i in xrange(len(lis)):
		output[count[lis[i]-min(lis)]-1] = lis[i]
		count[lis[i]-min(lis)]-=1

	print output

lis = [1,4,1,2,7,5,2]

countSort(lis)
