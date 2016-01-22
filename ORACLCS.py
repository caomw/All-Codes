def main():
	for cas in xrange(input()):
	    A = B = 10**9
	    for i in xrange(input()):
	        s = raw_input()
	        A = min(A, sum(c == 'a' for c in s))
	        B = min(B, sum(c == 'b' for c in s))
	    print min(A, B)
main()