def calc(num):
	next_point = []

	for i in xrange(num):
		next_point.append((i+1+num)%num)


	i = 0
	count=0
	while next_point[(i+num)%num]!=i:
	 	#print i
		#print next_point

		#print next_point[(i+num)%num]
		k = next_point[(i+num)%num]
		#print next_point[next_point[(i+num)%num]]
		next_point[(i+num)%num]=next_point[next_point[(i+num)%num]]
		i=next_point[(i+num)%num]

		next_point[k]=-1

	 	#print i
		#print next_point
		#print ""
		count+=1
	
#	 	break
	print "count",count
	return i+1



def main():
	while True:
		st = raw_input()
		num=int(st[0])*10 + int(st[1])
		num*=10**int(st[3])

		if not num:
			break
		num_=num
		pow2 = 1

		while num_:
			num_>>=1
			pow2<<=1
		pow2>>=1

		print ((num-pow2)<<1)+1

main()