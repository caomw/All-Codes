def optimumApproach(i,j,maxSum,cards):
	if i==j:
		return cards[i]

	if i>j:
		return 0

	if cards[j]>cards[i+1]:
		val1 = cards[i] + optimumApproach(i+1,j-1,maxSum,cards)
	else:
		val1 = cards[i] + optimumApproach(i+2,j,maxSum,cards)

	if cards[i]>=cards[j-1]:
		val2 = cards[j] + optimumApproach(i+1,j-1,maxSum,cards)
	else:
		val2 = cards[j] + optimumApproach(i,j-2,maxSum,cards) 

	maxSum[i][j] = max(val1,val2)
	return maxSum[i][j]

def main():
	while True:
		lis = map(int,raw_input().split())

		n = lis[0]
		if not n:
			break

		sumi = sum(lis[1:])

		print optimumApproach(lis,n)

main()