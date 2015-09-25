n = int(raw_input())

lint = list()
lstr = list()
for i in xrange(n):
	lstr.append(raw_input())
	lint.append(float(raw_input()))

lint1 = list(lint)

maxi = min(lint)
while lint1.count(maxi):
	lint1.remove(maxi)

maxi = min(lint1)

ans = list()
for i in xrange(len(lint)):
	if lint[i]==maxi:
		ans.append(lstr[i])

ans.sort()

for i in xrange(len(ans)):
	print ans[i]