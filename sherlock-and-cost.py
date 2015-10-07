
t = int(input())

def func(a,b):
	if(abs(a-b)>abs(a-1)):
		return b
	else:
		return 1

for _ in range(t):
	n = input()
	n = int(n)

	a = []
	b = []
	b = list(map(int,input().split()))

	sum = 0
	if(b[0]>b[1]):
		a.append(b[0])
		a.append(1)
		sum+=b[0]-1
	else:
		a.append(1)
		a.append(b[1])
		sum+=b[1]-1

	for i in range(2,n):
		a.append(func(a[i-1],b[i]))
		sum+=abs(a[i]-a[i-1])

	print (sum)
	print (a)