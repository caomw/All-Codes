def main():
	cuts = map(int,raw_input().split())
	n = cuts[0]

	cuts = cuts[1:]
	cuts.sort()
	#print cuts

	max_cuts = [-5000]*(4005)
	max_cuts[0] = 0
	max_cuts[cuts[0]] = 1
	max_cuts[cuts[1]] = 1
	max_cuts[cuts[2]] = 1

	for i in xrange(1,n+1,1):
		for j in xrange(3):
			if i<cuts[j]:
				break

			max_cuts[i] = max(max_cuts[i],max_cuts[i-cuts[j]]+1)
		#print max_cuts[i]

	print max_cuts[n]

main()
