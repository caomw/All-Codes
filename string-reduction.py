t = int(input())
for _ in range(t):
	st = input()
	n = len(st)

	a = 0
	b = 0
	c = 0

	for i in range(len(st)):
		if(st[i]=="a"):
			a+=1
		if(st[i]=="b"):
			b+=1
		if(st[i]=="c"):
			c+=1
	if(a==n or b==n or c==n):
		print (n)
	elif((a%2==0 and b%2==0 and c%2==0) or (a%2 and b%2 and c%2)):
		print (2)
	else:
		print (1)