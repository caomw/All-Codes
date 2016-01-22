def getInput():
	k =raw_input()
	
	while k=="":
		k = raw_input()

	return k

def genie(lis):
	n = len(lis)
	count = [0]*(n)

	for i in lis:
		if i>n-1:
			return 0

		if count[i] and count[n-1-i]:
			return 0

		if count[i]:
			count[n-1-i]+=1
		else:
			count[i]+=1

	return 1



def main():
	for i in xrange(int(getInput())):
		
		_ = int(getInput())
		lis = map(int,getInput().split())

		if genie(lis):
			print "YES"
		else:
			print "NO"

main()
