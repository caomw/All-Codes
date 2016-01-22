r=0
c=0

def dfs(time,i,j,cost,grid):
	if grid[i][j]=="D":
		time[i][j] = cost
		return
	if grid[i][j]=="X":
		return

	time[i][j]=cost
	dirx = [0,0,1,-1]
	diry = [1,-1,0,0]

	for k in xrange(4):
		if i+dirx[k]>=0 and i+dirx[k]<r and j+diry[k]>=0 and j+diry[k]<c:
			ni = i+dirx[k]
			nj = j+diry[k]

			if grid[ni][nj]!="X" and grid[ni][nj]!="S" and time[i][j]+grid[ni][nj]< time[ni][nj]:
				dfs(time,ni,nj,time[i][j]+grid[ni][nj],grid)

	return

def main():
	global r,c
	c,r = map(int,raw_input().split())

	while r+c:
		grid = []
		temp = []
		time = []

		for i in xrange(r):
			time.append([])
			temp.append(raw_input())
			grid.append([])
			for j in xrange(c):
				time[i].append(100000000000000)
				if temp[i][j]=="S":
					sti=i
					stj=j
					grid[i].append(10000000000000)

				elif temp[i][j]=="D":
					dti=i
					dtj=j
					grid[i].append(0)

				elif temp[i][j]=="X":
					grid[i].append('X')

				else:
					grid[i].append(int(temp[i][j]))

	#	print grid

		dfs(time,sti,stj,0,grid) 
		print time[dti][dtj]
		raw_input()
		c,r = map(int,raw_input().split())

main()



