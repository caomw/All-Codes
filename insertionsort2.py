
n = input()
n = int(n)

lis = list(map(int,input().split()))

for i in range(len(lis)):
	for j in range(i,len(lis)):
		if lis[i]>lis[j]:
			temp = lis[i]
			lis[i] = lis[j]
			lis[j] = temp
	print (lis)
