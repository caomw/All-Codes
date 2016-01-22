import sys

def getDistinct(lis):
	distinct = [0]*(len(lis)+1)
	distinct[1] = 1
	#1 2 2 3 4
	for k in xrange(2,1+len(lis)):
		distinct[k]=distinct[k-1]

		if lis[k-1]!=lis[k-2]:
			distinct[k]+=1

	return distinct


def main():	

	for i in xrange(input()):

		k = raw_input().split()
		while len(k)==0:
			k =raw_input().split()

		print "Case",
		print i+1,
		sys.stdout.softspace=False
		print (":")

		n,queries = map(int,k)

		k = raw_input().split()
		while len(k)==0:
			k =raw_input().split()

		lis = map(int,k)
		distinct = getDistinct(lis)
		for query in xrange(queries):
			
			k = raw_input().split()
			while len(k)==0:
				k =raw_input().split()

			i,j = map(int,k)
			print distinct[j]-distinct[i-1]

main()