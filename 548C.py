from time import time
def main():
	st = time()
	m = input()
	h1,a1 =map(int,raw_input().split())
	x1,y1 =map(int,raw_input().split())
	h2,a2 =map(int,raw_input().split())
	x2,y2 =map(int,raw_input().split())

	a = [0]*(m+1)
	b = [0]*(m+1)

	i = h1
	j = h2

	sec = 0
	flag = 1

	t=0
	while t<1000000:
		print i,j
		t+=1
		if i==a1 and j==a2:
			break

		a[i]+=1
		b[i]+=1

		i = (x1*i+y1)%m
		j = (x2*j+y2)%m

		if time()-st>5.880 or a[i]>m or b[j]>m:
			sec=-1
			break

		if i==h1 and j==h2:
			sec=-1
			break

		sec+=1

	print sec
	print 

main()