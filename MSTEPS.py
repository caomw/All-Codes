from sys import stdin

def main():
	readnex = iter(map(int,stdin.read().split())).next

	for _ in xrange(readnex()):
		siz = readnex()
		pos = [None]*(siz*siz+1)
		
		for x in xrange(siz):
			for y in xrange(siz):
				pos[readnex()] = x,y

		steps=0
		for x in xrange(1,siz*siz):
			a,b = pos[x+1],pos[x]
			steps += abs(a[0] - b[0]) + abs(a[1] - b[1])
		print steps

main()