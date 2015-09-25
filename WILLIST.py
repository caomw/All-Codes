n = int(raw_input())

counti = 0
while n>1:
	if n&1:
		counti+=1
	n/=2

if counti<1:
	print "TAK"
else:
	print "NIE"