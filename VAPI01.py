def main():
	for i in xrange(input()):
		n = input()
		stri = raw_input()

		keys = [0]*26
		count = 0
		for i in xrange(2*n-2):
			if i&1:
				if keys[ord(stri[i])-ord("A")]:
					keys[ord(stri[i])-ord("A")]-=1
				else:
					count+=1

			else:
				keys[ord(stri[i])-ord("a")]+=1

		print count

main()

