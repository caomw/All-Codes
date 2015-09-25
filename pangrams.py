str = raw_input()

list = []
for i in xrange(26):
	list.append(0)
str  = str.lower()
for i in xrange(len(str)):
	if str[i]>='a' and str[i]<='z':
		x = ord(str[i])-ord("a")
		list[x]+=1

flag = 1
for i in xrange(len(list)):
	#print list[i]
	if list[i]==0:
		flag=0
		#break

if flag:
	print "pangram"
else:
	print "not pangram"