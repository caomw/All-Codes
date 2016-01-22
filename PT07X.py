def find (par,x):
	if par[x]==x:
		return x
	else:
		return find(par,par[x])

def union(rank,par,x,y):
	parx = find(par,x)
	pary = find(par,y)

	if rank[par[x]]<rank[par[y]]:
		par[parx] = pary
	elif rank[par[x]]>rank[par[y]]:
		par[pary] = parx
	else:
		par[pary] = parx
		rank[parx]+=1


def main():
	nodes = input()
	par = list()
	for i in xrange(nodes):
		par.append(i)

	rank = [0]*(nodes)


	for edges in xrange(nodes-1):
		n1,n2 = map(int,raw_input().split())
		union(rank,par,n1-1,n2-1)

	par_hash = [0]*(nodes+1)
	for i in xrange(len(par)):
		par_hash[find(par,par[i])] = 1

	print sum(par_hash)

main()