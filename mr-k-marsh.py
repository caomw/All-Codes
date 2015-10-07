r,c = list(map(int, input().split()))

lis = []
vis = [[0]*c]*r

for i in range(r):
	lis.append(input())

sti = -1
stj = -1

for i in range(r):
	for j in range(c):

		while sti==-1:
			if lis[i][j]=='.':
				sti=i
				stj=j
 