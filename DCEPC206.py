def getSum(bit,ind):
	sum_=0
	ind+=1

	while ind>0:
		sum_+=bit[ind]
		ind-=ind&(-ind)
	return sum_

def updateBit(bit,ind,n,val):
	ind+=1

	while ind<=n:
		bit[ind]+=val
		ind += ind&(-ind)

def buildBit(lis,n):
	bit = [0]*(n+1)

	for i in xrange(n):
		updateBit(bit,i,n,lis[i])

	return bit

def main():
	freq = [2,1,1,3,2,3,4,5,6,7,8,9]
	n = len(freq)

	bit = buildBit(freq,n)
	print getSum(bit,5)

	freq[3] += 6
	updateBit(bit,3,n,6)

	print getSum(bit,5)

main()