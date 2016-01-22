from __future__ import division

def main():
	for case in xrange(input()):
		triplets = input()

		ratios = list()
		C = list()
		visited = list()

		for triplet in xrange(triplets):
			a,b,c = map(int ,raw_input().split())
			ratios.append(b/a)
			visited.append(0)
			C.append(c)
		
		maxCount = 0
		for i in xrange(len(ratios)):
			if visited[i]:
				pass

			visited[i] = 1
			for j in xrange(i,len(ratios),1):
				if visited[j]:
					pass
				elif ratios[i]==ratios[j] and :


main()