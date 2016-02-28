import sys 
def main():
	for _ in xrange(int(sys.stdin.readline())):
		n = int(sys.stdin.readline())
		lis = []
 
		total = 0
		lis = map(int,sys.stdin.readline().split())

		lis.sort()
		new_arr = [-1]*(n+1)
		new_arr[0]=lis[0]
		
		k=-1
		i=0
 
		while i!=n:
			if k!=-1 and lis[i]!=lis[k]:
				total+=1
				k-=1
			else:
				k+=1
				new_arr[k]=lis[i]
 
#			if k!=-1:
#				print new_arr[:k+1]
 
			i+=1
 
		print total+k+1
		#print ""
 
#		print total+
 
		
#		for i in xrange()
 
main()