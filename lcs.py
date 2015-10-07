n,m = input().split()
n = int(n)
m = int(m)

lisn = list(map(int,input().split()))
lism = list(map(int,input().split()))

lis =[[] for _ in range(n+1)]

for i in range(n+1):
	for j in range(m+1):
		lis[i].append(0)

for i in range(1,n):
	for j in range(1,m):
		# if i==0 or j==0:
			# lis[i][j]=0
		if lisn[i-1]==lism[j-1]:
			lis[i][j] = 1 + lis[i-1][j-1]
		else:
			lis[i][j] = max(lis[i-1][j],lis[i][j-1])

lcs = []

i = n 
j = m 
# print (lis[n][m])

while i>0 and j>0:
	if lisn[i-1] == lism[j-1]:
		lcs.append(lism[j-1])
		i-=1
		j-=1
	elif lis[i-1][j]>lis[i][j-1]:
		i-=1
	else:
		j-=1

# print (lis)		
lcs.reverse()
print (*lcs, sep=" ")