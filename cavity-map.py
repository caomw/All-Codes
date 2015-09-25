n = int(raw_input())
map = [[0 for i in xrange(n)] for i in xrange(n)]

for i in xrange(n):
	st = raw_input()

	for j in xrange(n):
		map[i][j] = int(st[j])
		
for i in xrange(n):
	for j in xrange(n):

		if (i>0 and j>0 and j<n-1 and i< n-1):
			if(map[i][j]>map[i-1][j] and map[i][j]>map[i][j+1] and map[i][j]>map[i+1][j] and map[i][j]>map[i][j-1] ):
				map[i][j] = "X"


for i in xrange(n):
	st = ""
	for j in xrange(n):
		st+=str(map[i][j])
	print st