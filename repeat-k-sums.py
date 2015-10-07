t = input()
t = int(t)

for _ in range(t):
	n,k = input().split()
	n = int(n)
	k = int(k)

	lis = []
	lis = list(map(int,input().split()))

	prob = []
	
	for i in range(len(lis)):
		if lis[i]%k==0 and not (lis[i] in prob) :
			prob.append(lis[i])
	sorted(prob)

	ans = [prob[0]]
	lasEl = prob[0]

