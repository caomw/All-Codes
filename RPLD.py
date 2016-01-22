def main():

	cases = raw_input()
	while cases=="":
		cases = raw_input()

	for case in xrange(1,int(cases)+1):
		ID = []
		sub = []
		rawData = []

		k = raw_input()
		while k=="":
			k=raw_input()

		nID,nLin = map(int,k.split())

		for i in xrange(nLin):
			rawData.append([])

			k = raw_input()
			while k=="":
				k=raw_input()
				
			x,y = map(int ,k.split())
			rawData[i].append(x)
			rawData[i].append(y)

		flag = 1 
		for i in xrange(nLin):
			if rawData[i+1][0]==rawData[i][0] and rawData[i-1][1]==rawData[i][1]:
				flag = 0
				break

		if flag:
			print ("Scenario #{0}: possible").format(case)
		else:
			print ("Scenario #{0}: impossible").format(case)

		print ""

main()
