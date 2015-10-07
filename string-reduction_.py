t = int(input())
for _ in range(t):
	st = input()
	n = len(st)

	count = [0]*3

	for i in range(len(st)):
		if(st[i]=="a"):
			count[0]+=1
		if(st[i]=="b"):
			count[1]+=1
		if(st[i]=="c"):
			count[2]+=1

	count.sort()

	while(count[1]>0):
		count[0]+=1
		count[1]-=1
		count[2]-=1
		count.sort()
	print (count[2])