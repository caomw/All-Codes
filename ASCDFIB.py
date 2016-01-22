mod = 100000

def fibo():
	f = list()
	f.append(0)
	f.append(1)

	for i in xrange(2,1100005,1):
		f.append((f[i-1]+f[i-2])%mod)

	return f

def countSort(a,b,f):
	lis = f[a-1:a+b]

	mini = min(lis)
	maxi = max(lis)

	range_list = [0]*(maxi-mini+5)

	for i in xrange(len(lis)):
		range_list[lis[i]-mini]+=1

	k=0
#	print lis
#	print range_list
	for i in xrange(len(range_list)):
		if k==100:
			break

		while range_list[i] and k!=100:
			range_list[i]-=1
			k+=1
			print i+mini,

	print ""
	return

def main():
	f=fibo()

	for case in xrange(input()):
		a,b = map(int,raw_input().split())

		print "Case ",case+1,":",
		countSort(a,b,f)

main()