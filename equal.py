
def operations(x):
	val = 0

	val += x//5
	x%=5

	val+=x//2
	x%=2

	val+=x//1
	x%=1

	return val


def findIt(lis):
	sumi = []
	mini = min(lis)

	for j in range(1):
		sumi.append(0)
		for i in range(len(lis)):
			temp = abs(lis[i]-(mini-j))
			sumi[j]+=(operations(temp))

	sumi.append(0)
	for i in range(len(lis)):
		temp = lis[i]
		sumi[1]+=(operations(temp))

	return min(sumi)

def main():
	t = int(input())

	for i in range(t):
		n = int(input())

		lis = list(map(int,(input().split())))

		print (findIt(lis))
		
main()