from bisect import *

def ceilIdx(lis,l,r,val):
	print (lis)
	while(r>l+1):
		m = l+(r-l)//2
		
		if(lis[m]>=val):
			r=m
		else:
			l=m

	return r

def LIS(lis):
	n = len(lis)
	a = [0]*n
	a[0] = lis[0]
	lth = 1
	for i in range(n):
		if(lis[i]<a[0]):
			a[0] = lis[i]
		elif lis[i]>a[lth-1]:
			a[lth] = lis[i]
			lth+=1
		else:
			a[ceilIdx(a,-1,lth-1,lis[i])] = lis[i]

	return (lth)



def main():
	n = int(input())
	lis = list(map(int,input().split()))


	print (LIS(lis))

main()

