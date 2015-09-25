st = raw_input()

a1 = int(st[0])
a2 = int(st[1])

a = a1*10+a2

if st[8]=='P':
	a+=12

	flag = 1 
	if a==24:
		a-=12
		print "%d%s"%(a,st[2:8])
		flag = 0

	if(a<10) and flag:
		print "0%d%s"%(a,st[2:8])
	elif flag:
		print "%d%s"%(a,st[2:8])
else:

	if a==12:
		a=0

	if(a<10):
		print "0%d%s"%(a,st[2:8])
	else:
		print "%d%s"%(a,st[2:8])