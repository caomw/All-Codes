from sys import stdin
nex = iter(map(int,stdin.read().split())).__next__

def markMultiples(vis,k):
	i = 2
	num=i*k

	while num <= len(vis):
		vis[num-1] = 1
		i+=1
		num=i*k

def SeiveOfEratosthenes(n):
	lis = []
	counti=0
	if(n>1):
		vis=[0]*n

		for i in range(1,n):
			if not vis[i]:
				lis.append(i+1)
				# print (vis[i])
				counti+=1
				markMultiples(vis,i+1)
	return lis

lis = []
for i in range(42):
	if(i<4):
		lis.append(1)
	else:
		lis.append(lis[i-1]+lis[i-4])

# t = nex()

# for i in range(t):
print (SeiveOfEratosthenes(10))


