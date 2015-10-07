def main():
	 t = int(raw_input())

	 for _ in xrange(t):
	 	n = int(raw_input())
	 	lis = list((raw_input().split()))
	 	x = raw_input()

	 	max_count=0
	 	max_ind = -1
	 	for i in xrange(len(lis)):
	 		k = lis[i]
	 		# print k,x,k.count(x)
	 		count=k.count(x)

	 		# while k:
	 		# 	if(k%10==x):
	 		# 		count+=1
	 		# 	k/=10

		 	if count>max_count:
		 		max_ind = i
		 		max_count = count

	 	print lis[max_ind]
main()