tree=[-1]*1000
preIndex = 0

def search(inSt,inEnd,term,inO):
	for i in xrange(inSt,inEnd+1):
		if term == inO[i]:
			return i
	return -1

def constructTree(inO,pre,inSt,inEnd,i):
	global preIndex,tree

	if inSt>inEnd:
		return

	tree[i]=pre[preIndex]
	
	if inSt==inEnd:
		preIndex+=1
		return

	inIndex = search(inSt,inEnd,pre[preIndex],inO)
	preIndex+=1

	constructTree(inO,pre,inSt,inIndex-1,i*2+1)
	constructTree(inO,pre,inIndex+1,inEnd,i*2+2)

post = []
def printPosOrder(i):
	global post

	if (tree[i]==-1):
		return

	printPosOrder(2*i+1)
	printPosOrder(2*i+2)
	post.append(tree[i])

	return

def mark():
	N = input()

	pre = raw_input().split()
	pos = raw_input().split()
	inO = raw_input().split()

	constructTree(inO,pre,0,len(inO)-1,0)
	printPosOrder(0)

	flag = 1
	for i in xrange(len(pos)):
			if pos[i]!=post[i]:
				flag = 0
				break
	if flag:
		print "yes"
	else:
		print "no"

mark()

