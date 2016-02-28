def main():
	bishops = []
	for i in xrange(1001):
		bishops.append([])
		for j in xrange(1001):
			bishops[i].append(0)

	n = input()
	inp = []
	for i in xrange(n):
		lis = map(int,raw_input().split())
		inp.append(lis)
		bishops[lis[0]][lis[1]]=1

	inp.sort()

	counti = 0
	for x in xrange(len(inp)):
		i = inp[x][0]
		j = inp[x][1]
		while i<999 and j<999:
			i+=1
			j+=1
			if bishops[i][j]==1:
				counti+=1

		i= inp[x][0]
		j = inp[x][1]
		while i<999 and j>1:
			i+=1
			j-=1
			if bishops[i][j]==1:	
				counti+=1	
	print counti

main()