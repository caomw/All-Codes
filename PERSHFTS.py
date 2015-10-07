def main():
	t = int(raw_input())

	for _ in xrange(t):
		n,k = raw_input().split()
		n = int(n)

		p = []
		q = []

		p = list(map(int,raw_input().split()))
		q = list(map(int,raw_input().split()))

		indp = p.index(1)
		indq = q.index(1)

		flag = 1
		for i in xrange(n):
			if(p[(indp+i)%n]!=q[(indq+i)%n]):
				flag = 0
				break
		if flag:
			print abs(q[0])
		else:
			print "-1"

main()


