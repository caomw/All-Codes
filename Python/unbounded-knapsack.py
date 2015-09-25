from sys import stdin
nex = iter(map(int,stdin.read().split())).next

t = nex()

def func(list,k,n):
	if n<1:
		return 0

	if func(list,k-n,n)>k and func(list,k,n-1):
		return 0
	
	if func(list,k-n,n)>k:
		return func(list,k,n-1)
	
	if func(list,k,n-1)>k:
		return func(list,k-n,n)

	return max(func(list,k,n-1),func(list,k-n,n))

for _ in xrange(t):
	n = nex()
	k = nex()

	list = []
	for i in xrange(n):
		list.append(nex())
		if list[i]>k:
			list.pop()

	list = list.sort()
	print func(list,k,n)