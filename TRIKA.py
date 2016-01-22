def calc(lis):
	lis.sort()

	team1 = 0
	team2 = 0
	
	for i in xrange(len(lis)-1,-1,-1):
		if team1<team2:
			team1+=lis[i]
		else:
			team2+=lis[i]

	print team2,team1
	return abs(team2-team1)

def main():
	l,w = map(int,raw_input().split())
	raw_input()
	st,ed = map(int,raw_input().split())

	for i in xrange(l):
		raw_input()
		lis = raw_input()
		print lis

		lis_ = []
		temp = ""

		for j in xrange(len(lis)):
			if lis[j]==" ":
				lis_.append(temp)
				temp=""

			elif lis[j]!="A^":
				temp+=lis[j]

		print lis_




main()