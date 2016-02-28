def bfs(src,par,val,graph):
	val[src]=par
	
	for i in xrange(len(graph[src])):
		if val[graph[src][i]]==-2:
			val = dfs(graph[src][i],par,val,graph)
		elif val[graph[src][i]]==-par:
			for i in xrange(len(val)):
				val[i]=-5
			return val

	return val

def main():
	n,m = map(int,raw_input().split())

	graph = []
	val = [-2]*(n)

	for i in xrange(n):
		graph.append([])

	while m:
		m-=1

		i,j = map(int,raw_input().split())
		i-=1
		j-=1

		graph[i].append(j)
		graph[j].append(i)

	bs = []
	for i in xrange(n):
		if len(graph[i])>=n-1:
			val[i]=0
			bs.append(i)

	flag = 1
	for i in xrange(len(bs)):
		for j in xrange(len(graph[i])):
			if graph[i][j]==-2 and flag==1:
				val = bfs(graph[i][j],1,val,graph)
				flag=2

			elif graph[i][j]==-2 and flag==2:
				val =bfs(graph[i][j],-1,val,graph)
				flag=3

			elif flag ==3:
				break 

#	print val
	a = 0
	b = 0
	c = 0

	for i in xrange(len(val)):
		if val[i]==0:
			b+=1
		elif val[i]==1:
			c+=1
		elif val[i]==-1:
			a+=1
		else:
			print "No"
			return

	print "Yes"

	stri = ""
	stri += a*"a"
	stri += b*"b"
	stri += c*"c"

	print stri 


main()



