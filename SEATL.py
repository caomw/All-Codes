def main():
	for i in xrange(input()):
		r,c = map(int,raw_input().split())
		grid = []
		
		for i in xrange(r):
			grid.append(map(int,raw_input().split()))

		gmaxi = 0
		maxi = 0
		counti = [0]*((10**6)+10)

		for i in xrange(r):
			for j in xrange(c):
				for k in xrange(r):
					counti[grid[k][j]]+=1
					maxi = max(maxi,counti[grid[k][j]])
				
				for l in xrange(c):
					if l==j:
						continue
					counti[grid[i][l]]+=1
					maxi = max(maxi,counti[grid[k][j]])

				for k in xrange(r):
					counti[grid[k][j]]=0
				
				for l in xrange(c):
					counti[grid[i][l]]=0

				gmaxi = max(maxi,gmaxi)
				maxi=0


		print gmaxi
		gmaxi = 0

main()