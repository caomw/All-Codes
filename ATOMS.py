from math import log

def main():
	n = raw_input().split(" ")
	for i in xrange(int(n[0])):
		n,k,m = map(int,raw_input().split())
		print int(log(m/n,k))

main()