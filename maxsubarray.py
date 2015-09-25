from sys import stdin

inp = iter(map(int,stdin.read().split())).next

t = inp()
 
for _ in xrange(t):
	list = []

	n = inp()
	list.append(inp())

	maxi = list[0]
	cur = maxi
	flag = 1
	cnt = max(0,list[0])

	for i in xrange(1,n):
		list.append(inp())

		cur = max(list[i],cur+list[i])
		maxi = max(maxi,cur)
		
		if list[i]>=0:
			flag=0
			cnt += list[i]

	if flag:
		cnt = max(list)
		maxi = cnt

	print maxi,cnt