import sys

def encode(stri):
	count = 1
	encoded = ""
	for i in xrange(1,len(stri)):
		if stri[i]==stri[i-1]:
			count+=1
		else:
			if count>3:
				encoded+=str(count)
				encoded+=("!")
				encoded+=(stri[i-1])
			else:			
				while count:
					count-=1
					encoded+=(stri[i-1])

			count = 1

	if count>3:
		encoded+=str(count)
		encoded+=("!")
		encoded+=(stri[-1])
	else:			
		while count:
			count-=1
			encoded+=(stri[-1])

	print encoded


def main():
	inp =  sys.stdin.readlines()

	for stri in inp:
		if stri	!= inp[-1]:
			encode(stri[:-1])
		else:
			encode(stri)

main()