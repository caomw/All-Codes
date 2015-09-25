from sys import stdin
l=[]
readnex = iter(map(str,stdin.read().split())).next

n= int(readnex())
for _ in xrange(n):
	st = readnex()

	if st == 'append':
		x = int(readnex())
		l.append(x)

	elif st == 'insert':
		i = int(readnex())
		x = int(readnex())
		l.insert(i,x)

	elif st == 'remove':
		x = int(readnex())
		l.remove(x)

	elif st == 'pop':
		l.pop()

	elif st == 'index':
		x = int(readnex())
		print l.index(x)

	elif st == 'count':
		x = int(readnex())
		print l.count(x)

	elif st == 'sort':
		l.sort()

	elif st == 'reverse':
		l.reverse()

	elif st == 'print':
		print l