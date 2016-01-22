def dfs(grid,i,j,dist,val,r,c):
	dist[i][j] = val

	dirx_ = [0,0, 0,1,1, 1,-1,-1,-1]
	diry_ = [0,1,-1,0,1,-1, 0, 1,-1]
	value = [0,1 ,1,1,2, 2, 1, 2, 2]

	for k in xrange(1,9,1):
		ndirx = i+dirx_[k]
		ndiry = j+diry_[k]

		if ndirx>=0 and ndiry>=0:
			if ndirx<r and ndiry<c:

				if grid[ndirx][ndiry]=='0':
					if dist[ndirx][ndiry]>val+value[k]:
						dfs(grid,ndirx,ndiry,dist,val+value[k],r,c)

				if grid[ndirx][ndiry]=='1' and dist[ndirx][ndiry]!=0:
					dfs(grid,ndirx,ndiry,dist,0,r,c)

	return dist	

def main():
	for i in xrange(input()):
		r,c = map(int, raw_input().split())

		grid = []
		dist = []

		for i in xrange(r):
			grid.append(raw_input())
			dist.append([])
			for j in xrange(c):
				dist[i].append(10000000)
				if grid[i][j]=='1':
					st = i
					ed = j

		d = dfs(grid,st,ed,dist,0,r,c)

		for i in xrange(r):
			for j in xrange(c):
				print d[i][j],
			print ""

main()