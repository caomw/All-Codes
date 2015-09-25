st = raw_input()

stq = ""
for i in xrange(len(st)):
	if st[i].islower():
		stq += st[i].upper()
	elif st[i].isupper():
		stq += st[i].lower()
	else:
		stq += st[i]

print stq