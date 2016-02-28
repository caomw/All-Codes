def main():
	n,m,q = map(int,raw_input().split())
	grid = []
	for i in xrange(n):
		lis = map(int,raw_input().split())
		grid.append(lis)

	while q:
		i,j = map(int,raw_input().split())
		i-=1
		j-=1

		grid[i][j] = not grid[i][j]
		grid[i][j] = int(grid[i][j])
		q-=1

		gmaxi = 0

		for i in xrange(n):
			j = 0
			maxi = 0
			counti = 0

			while j+1<m:
				if grid[i][j]==1 and counti==0:
					counti=1

				maxi = max(maxi,counti)				

				if j+1<m and grid[i][j+1]==grid[i][j] and grid[i][j]==1:
					counti+=1
				elif grid[i][j+1]!=grid[i][j]:
					counti=0

				maxi = max(maxi,counti)				

				j+=1

			maxi = max(maxi,counti)
#			print maxi
			gmaxi = max(maxi,gmaxi)

		print gmaxi

main()

