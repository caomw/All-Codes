def knapSack(wv,W):
	knap = []

	for i in xrange(2):
		knap.append([])
		for w in xrange(W+1):
			knap[i].append(0)

	for i in xrange(1,len(wv)+1):
	 	for w in xrange(1,W+1):
#	 		if w>=wv[i-1][0]:
			if i&1:
				if w>=wv[i-1][0]:
					knap[1][w] = max(knap[0][w],knap[0][w-wv[i-1][0]]+wv[i-1][1])
		 		else:
	 				knap[1][w]=knap[0][w]
			else:
				if w>=wv[i-1][0]:
					knap[0][w] = max(knap[1][w],knap[1][w-wv[i-1][0]]+wv[i-1][1])
		 		else:
	 				knap[0][w]=knap[1][w]
	
	if len(wv)&1:
		return knap[1][W]

	return knap[0][W]

def main():
	W,n = map(int ,raw_input().split())

	wv = []

	for i in xrange(n):
		v,w = map(int,raw_input().split())
		if w<=W:
			wv.append([w,v])

	wv.sort()

	print knapSack(wv,W)

main()