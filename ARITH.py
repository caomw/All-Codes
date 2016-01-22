from math import sqrt

def differ(stri):
	conglo = []
	signs = ['*','+','-']
	i=0

	while(len(conglo)!=2):
		conglo =  stri.split(signs[i])
		i+=1

	return conglo,signs[i-1]

def add(num1,num2):
	n = max(len(num1),len(num1))
	n1 = len(num1)-1
	n2 = len(num2)-1

	sumi = []
	carry = 0
	for i in xrange(n-1,-1,-1):
		dig1 = int(num1[n1])
		dig2 = int(num2[n2])
		n1-=1
		n2-=1

		sumdig = str(dig1+dig2+int(carry))
		print sumdig

		if(len(sumdig)==2):
			carry = sumdig[len(sumdig)-2]
		else:
			carry = "0"

		sumi.append(int(sumdig[len(sumdig)-1]))
	
	if(len(num1)>len(num2))
	sumi = []

	print sumi


def solve(nums,sign):
	if(signs=='+'):
		add(nums[0],nums[1])
	elif(signs=='-'):
		sub(nums[0],nums[1])
	elif(signs=='*'):
		mul(nums[0],nums[1])


def main():
	for i in xrange(input()):
		stri = raw_input()
		nums ,sign = differ(stri)

		solve(nums,sign)

add("325","4405")
