def isPalin(stri):
	flag = 1
	for i in xrange(len(stri)/2):
		if stri[i]!=stri[len(stri)-i-1]:
			flag = 0

	return flag

def main():
	stri = raw_input()
	k = input()

	if (len(stri)%k)!=0:
		print "NO"
		return

	n = len(stri)
	flag =1

	i=0
	while i<n:
		if not isPalin(stri[i:i+n/k]):
			flag = 0
			break
		i+=n/k

	if flag:
		print "YES"
	else:
		print "NO"

main()