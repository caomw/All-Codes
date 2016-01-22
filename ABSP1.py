def main():
	for case in xrange(input()):
		n = input()
		tempLis = map(int,raw_input().split())
		
#		tempLis=[]
#		for i in xrange(n):
#			tempLis.append(int(raw_input()))


		lis = [tempLis[0]]
		count = [1]
		for i in xrange(1,n,1):
			if(tempLis[i]!=tempLis[i-1]):
				lis.append(tempLis[i])
				count.append(1)
			else:
				count[len(count)-1]+=1
				count.append(0)
				lis.append(0)
		
		cumu = [0]*n

		cumu[n-1]=lis[n-1]*count[n-1]
		if lis[n-1]==0:
			cumu[n-1]=0

		for i in xrange(n-1):
			cumu[-i-2]=cumu[-i-1]

			if(lis[-i-2]!=0):
				cumu[-i-2]+=lis[-i-2]*count[-i-2]

		sumi=0
		for i in xrange(n):
			if(lis[i]!=0):
				sumi+=(cumu[i]-(n-i)*lis[i])*count[i]

		print sumi
main()

