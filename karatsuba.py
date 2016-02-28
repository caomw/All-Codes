def makeEqual(str1,str2):
	len1 = len(str1)
	len2 = len(str2)

	if len1<len2:
		for i in xrange(len2-len1):
			str1+='0'
		return len2,str1,str2

	elif len1>len2:
		for i in xrange(len1-len2):
			str2+='0'
	
	return len1,str1,str2

def addBitStrings(str1,str2):
	leng,str1,str2 = makeEqual(str1,str2)
	carry = 0
	result = ""

	for i in xrange(leng-1,-1,-1):
		print "carry=",carry
		result+=str(ord(str1[i])^ord(str2[i])^carry)
		carry = (ord(str1[i])&ord(str2[i])) | (ord(str2[i])&carry) | (carry^ord(str1))

	if carry:
		result+='1'

	print str1,str2,ord(str1[i])^ord(str2[i]),carry
	print "result=",result
	return result

def multiplySingleBits(str1,str2):
	return (ord(str1[0])*ord(str2[0]))

def multiply(X,Y):
	n,X,Y = makeEqual(X,Y)
	print n

	if n==1: return multiplySingleBits(X,Y)
	if n==0: return 0

	fh = n/2
	sh = n-fh

	print fh,sh

	Xl = X[:fh]
	Xr = X[fh:sh]

	Yl = Y[:fh]
	Yr = Y[fh:sh]

	print "P1"
	P1 = multiply(Xl,Yl)
	print "P2"
	P2 = multiply(Xr,Yr)
	print "P3"
	P3 = multiply(addBitStrings(Xl,Xr),addBitStrings(Yl,Yr))

	return (1<<(2*sh))*P1 + (P3-P2-P1)*(1<<sh) + P2

multiply("1100", "1010")