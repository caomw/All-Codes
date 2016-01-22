def get_input():
	k = raw_input()

	while k=="":
		raw_input()

	return k

def floyd_warshall(grid,n,neigh):
	vis = []
	for i in xrange(n):
		flag = 0
		vis.append([])

		for j in xrange(n):
			vis[i].append(0)

			for k in xrange(n):
				
				if grid[i][j]+grid[j][k]==grid[i][k] and grid[i][j]*grid[j][k]*grid[i][k]:
					#print i,j,k,grid[i][j],grid[j][k],grid[i][k]
					neigh[i][k]=0

	#print neigh

	for i in xrange(n):
		for j in xrange(n):
			if not i==j and neigh[i][j] and not vis[i][j]:
				vis[i][j]=1
				vis[j][i]=1
				print i+1,j+1



def main():
	for i in xrange(input()):
		n = int(get_input())


		grid = []
		neigh = []

		for i in xrange(n):
			neigh.append([])

			temp = map(int ,get_input().split())
			grid.append(temp)

			for j in xrange(n):
				neigh[i].append(1)

		floyd_warshall(grid,n,neigh)

main()
