from sys import stdin
from itertools import imap

index = -1
def bfs(src,vis,graph):
	vis[src]+=1

	for i in xrange(len(graph[src])):
		if not vis[graph[src][i]] and vis[graph[src][i]]!=-1:
			vis = bfs(graph[src][i],vis,graph)

	return vis

def findMax(src,graph,vis,maxi):
	global index
	#print src
	for i in xrange(len(graph[src])):
		if not vis[graph[src][i]] and vis[graph[src][i]]==maxi:
			index =graph[src][i] 
			return graph[src][i]
		
		findMax(graph[src][i],graph,vis,maxi)


def main():
	dstream = imap(int,stdin.read().split())
	for i in xrange(next(dstream)):
		n = next(dstream)
		m = next(dstream)

		graph = [[] for i in xrange(n+1)]
		inv_graph = [[] for i in xrange(n+1)]
		vis = [0]*(n+1)
		inv_vis = [0]*(n+1)

		for i in xrange(m):
			a = next(dstream)
			b = next(dstream)
			graph[a].append(b)
			inv_graph[b].append(a)


		vis = bfs(1,vis,graph)
		inv_vis = bfs(n,inv_vis,inv_graph)
		
		#print vis
		#print inv_vis
		
		for i in xrange(n):
			if vis[i] and inv_vis[i]:
				pass
			else:
				vis[i]=-1

		print vis
		#print ""

		#findMax(1,graph,vis,max(vis))
		print index

main()