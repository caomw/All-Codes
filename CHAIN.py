def find(i,par,d):

	if par[i]==i:
		return par[i]
	temp = par[i]

	par[i] = find(par[i],par,d)
	d[i] +=d[temp];

	return 	par[i];

def main():
	for i in xrange(input()):
		par = []
		d = []

		count=0
		n,k = map(int,raw_input().split())
		
		for i in xrange(n+1):
			par.append(i)
			d.append(0)

		for q in xrange(k):
			state,x,y = map(int,raw_input().split())
			state-=1

			if x>n or y>n:
				count+=1
				continue

			px = find(x,par,d)
			py = find(y,par,d)

			if px==py:
				temp = (d[x]-d[y])%3
				
				if temp<0:
					temp+=3

				if temp!=state:
					count+=1
		
			else:
				par[px]=py

				i = (d[x]-d[y]-state)%3

				if i<0:
					d[px]=-i
				else:
					d[px]=-i+3;		
		print count

main()