from sys import stdin
readnex = iter(map(int,stdin.read().split())).next

n1 = readnex()
n2 = readnex()

list = []
list.append(n1)
list.append(n2)

n = readnex()

for i in range(2,n):
	list.append(list[i-1]**2 + list[i-2])

print list[n-1]

