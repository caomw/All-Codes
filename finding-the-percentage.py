t = int(raw_input())

dict = {"o1ne":1}
for _ in xrange(t):
	name,a,b,c = raw_input().split()
	a = float(a)
	b = float(b)
	c = float(c)
	d = (a+b+c)/3
	dict[name] = d
name = raw_input()
print format(dict[name],'.2f')