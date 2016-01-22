def main():
	n = input()
	dict_ = []
	lines = []
	occ = []

	for i in xrange(n):
		line = raw_input().split(" ")
		lines.append(line)
		occ.append([])
		
		for j in xrange(len(line)):
			if line[j] not in dict_:
				print line[j]
				dict_.append(line[j])
				occ[i].append(1)
				print occ[i][j]
			else:
				occ[i].append(0)
				
	for i in xrange(len(lines)):
		for j in xrange(len(lines[i])):
			if occ[i][j]:
				print lines[i][j],
		print ""



main()