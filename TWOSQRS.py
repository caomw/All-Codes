import sys,math

maxi=1000007
prm = []
vis = []
k = 0
for i in range(maxi):
	prm.append(0)
	vis.append(0)

for i in range(2,maxi):
	if not vis[i]:
		prm[k] = i
		k+=1
		j = i

		while j+i<maxi:
			vis[j+i] = 1
			j+=i

def main():
	t = int(raw_input())
	for _ in xrange(t):
		n = int(raw_input())	

		e=0
		for i in range(k):
			a = 0
			while not n%prm[i]:
				if prm[i]%4==3:
					a+=1
				n/=prm[i]

			if a%2:
				print "NO"
				e=1
				break

		if not e and n%4!=3:
			print n
			print "YES"
		elif not e:
			print "NO"
main()