from bisect import *

#a= input()
#lis = list(map(int,input().split()))

def ceilIdx(lis,l,r,val):

	while(r>1+l):
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
			print (a)
			a[ceilIdx(a,-1,lth-1,lis[i])] = lis[i]
			
	print (a)
	return (lth)



def main():
	n = int(input())
	lis = [0, 8, 4, 12, 2, 14, 1, 9, 5, 13, 3, 11, 7, 15]
	# for i in range(n):
	# 	lis.append(int(input()))

	print (LIS(lis))

main()