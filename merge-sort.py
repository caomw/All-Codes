from sys import stdin
nex = iter(map(int, stdin.read().split())).next

answer = 0
def merge(left,right,arr):
	global answer
	l=0
	r=0
	i=0

	while l<len(left) and r<len(right):
		if left[l]<=right[r]:
			arr[i] = left[l]
			l+=1
		else:
			arr[i] = right[r]
			r+=1
			answer+=len(left)-l
			#print left,right,len(left)
		i+=1

	while l<len(left):
		arr[i]=left[l]
		i+=1
		l+=1

	while r<len(right):
		arr[i]=right[r]
		i+=1
		r+=1


def mergeSort(arr):
	if len(arr)<2:
		return arr

	left = []
	right = []
	for i in xrange(len(arr)/2):
		left.append(arr[i])
	for i in xrange((len(arr)/2),len(arr)):
		right.append(arr[i]) 

	mergeSort(left)
	mergeSort(right)
	merge(left,right,arr)

	return arr

t = nex()

for i in xrange(t):
	answer = 0
	n = nex();
	lis = []
	for i in xrange(n):
		lis.append(nex())

	mergeSort(lis)

	print answer