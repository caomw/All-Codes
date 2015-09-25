st1 = raw_input()

a=0
b=0
c=0
d=0
e=0

for i in xrange(len(st1)):
	st = st1[i]
	if st.isalnum():
		a=1

	if st.isalpha():
		b=1

	if st.isdigit():
		c=1

	if st.islower():
		d=1

	if st.isupper():
		e=1

if a:
	print "True"
else:
	print "False"
if b:
	print "True"
else:
	print "False"
if c:
	print "True"
else:
	print "False"
if d:
	print "True"
else:
	print "False"
if e:
	print "True"
else:
	print "False"