import sys

def main():
	u,l,c = raw_input().split()
	U = list(map(int,raw_input().split()))
	L = list(map(int,raw_input().split()))

	temp1 = [0]*1005
	temp2 = [0]*1005

	for i in xrange(max(len(U),len(L))):
		if i<len(U):
			temp1[U[i]]+=1
		if i<len(L):
			temp2[L[i]]+=1

	mod = 1000000007
	combo=[]
	for i in xrange(1005):
		combo.append((temp1[i]%mod)*(temp2[i]%mod)%mod)

	c = int(c)
	n = len(combo)

	# inter = (set(U))
	# inter.union(set(L))
	# inter = list(inter)

	# n = len(inter)
	# ucn = []
	# lcn = []

	# combo = []#[0]*5*100000
	b = [0]*n
	# for i in xrange(n):
	# 	ucn.append(U.count(inter[i])%mod)
	# 	lcn.append(L.count(inter[i])%mod)
	# 	combo.append((U.count(inter[i])*L.count(inter[i]))%mod)
	# 	b.append(0)
		
	ans = []
	combs=[]
	combi2 = []
	combs.append(combo[0])
	b[0]=combo[0]
	# combi2combo[0]


	for i in xrange(1,n):
		combs.append(combs[i-1]+combo[i])
		b[i]=combs[i]
		combi2.append(combs[i])

	# print combo

	ans = []
	for j in range(c):
		sumi=0
		# n=len()

		# print b
		for i in xrange(j,n-1):
			# print combi2
			sumi=((sumi%mod)+((combo[i+1]%mod)*(b[i]%mod))%mod)%mod
			# print combo[i+1],b[i],sumi
			combi2[i]=sumi
		
		# b=combi2
		for i in xrange(len(b)-1):
			b[i+1]=combi2[i]
			
		# print "end=",combi2
		# print sumi
		# sys.stdout.write(" ")
		ans.append(sumi)

	# print ans
	sys.stdout.write(" ".join(str(x) for x in ans))

main()