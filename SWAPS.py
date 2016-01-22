from sys import stdin

def merge(left,right,arr,answer):

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

	return answer


def mergeSort(arr,answer):
	if len(arr)<2:
		return answer

	left = []
	right = []
	for i in xrange(len(arr)/2):
		left.append(arr[i])
	for i in xrange((len(arr)/2),len(arr)):
		right.append(arr[i]) 

	answer=mergeSort(left,answer)
	answer=mergeSort(right,answer)
	answer=merge(left,right,arr,answer)

	return answer

def main():
	n = input()
	lis = map(int,raw_input().split())

	q = input()
	for i in xrange(q):
		ind,val = map(int, raw_input().split())
		lis[ind-1] = val
		lis1 = lis[:]
		print mergeSort(lis1,0) 
		

main()