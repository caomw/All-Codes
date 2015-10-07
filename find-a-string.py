st1 = raw_input()
st2 = raw_input()

counti = 0
for i in xrange(len(st1)):
	if st1[i]==st2[0]:
		if i+len(st2)-1>=len(st1):
			break
		counti+=1
		for j in xrange(len(st2)):
			if st2[j]!=st1[i+j]:
				counti-=1
				break

print counti