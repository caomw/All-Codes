def main():
	div = input()
	while div:

		stri = raw_input()
		h = len(stri)/div

		grid = []

		for i in xrange(h):
			grid.append([])
			for j in xrange(div):
				grid[i].append(0)

		dir_ = -1
		k = 0

		for i in xrange(h):
			
			dir_*=-1
			if dir_==-1:
				j = div-1
			else:
				j = 0

			while j>=0 and j<div:
				grid[i][j]=stri[k]
				j+=dir_
				k+=1

		stri = ""

		for i in xrange(div):
			for j in xrange(h):
				stri+=grid[j][i]

		print stri
		div = input()


main()		 	