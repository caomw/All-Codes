def main():
	for i in xrange(input()):
		stri = raw_input().split(" ")

		stri.sort()
		count=1
		max_count = 0
		for i in xrange(1,len(stri)):
			if stri[i]==stri[i-1]:
				count+=1
			else:
				max_count=max(max_count,count)
				count = 1
		if len(stri)>1 and stri[-1]==stri[-2]:
			count+=1

		max_count=max(max_count,count)
		count = 1


		print max_count

		print stri

main()