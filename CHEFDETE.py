def main():
	n = input()
	gang = map(int,raw_input().split())

	counted = [0]*(n+1)
	
	for man in gang:
		counted[man]=1

	for i in xrange(n+1):
		if not counted[i]:
			print i,

main()