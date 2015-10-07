n,m = input().split()
n = int(n)
m = int(m)
lisn  =input()
lism = input()
# lisn = list(map(int,input().split()))
# lism = list(map(int,input().split()))

cnt = 0
j = 0
prevj = 0
lis = []
for i in range(n):
	while j<m:
		if(lisn[i]==lism[j]):
			# print (lisn[i]),
			lis.append(lisn[i])
			prevj=j
			break
		j+=1

	if(j==m):
		j=prevj
print (*lis,sep=" ")