def powReq(tStrength,i,j,val,powReqLis,n):
	if i<0 or j<0 or i>=n or j>=3 or powReqLis[i][j]<=tStrength[i][j]+val :
		return

	powReqLis[i][j] = val+tStrength[i][j]

	powReq(tStrength,i+1,j+1,powReqLis[i][j],powReqLis,n)
	powReq(tStrength,i+1,j-1,powReqLis[i][j],powReqLis,n)

	return



def main():
	for case in xrange(input()):
		raw_input()
		n = input()

		tStrength = []
		powReqLis = []

		for i in xrange(n):
			raw_input()
			tStrength.append([])
			powReqLis.append([])
			tStrength[i]=map(int,raw_input().split())
			for j in xrange(3):
				powReqLis[i].append(100000)

		powReq(tStrength,0,0,0,powReqLis,n)
		powReq(tStrength,0,1,0,powReqLis,n)
		powReq(tStrength,0,3,0,powReqLis,n)

		print min(min(powReqLis[n-1][0],powReqLis[n-1][1]),powReqLis[n-1][2])
			

main()