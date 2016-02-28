def main():
	x,y,z = map(float,raw_input().split())
	
	a = []
	a.append(x**(y**z))
	a.append(x**(z**y))
	a.append((x**y)**z)

	a.append((x**z)**y)
	a.append(y**(x**z))
	a.append(y**(z**x))

	a.append((y**x)**z)
	a.append((y**z)**x)
	a.append(z**(x**y))

	a.append(z**(y**x))
	a.append((z**x)**y)
	a.append((z**y)**x)

	ind = a.index(max(a))

	if ind==0:
		print "x^y^z"
	elif ind==1:
		print "x^z^y"
	elif ind==2:
		print "(x^y)^z"
	elif ind==3:
		print "(x^z)^y"
	elif ind==4:
		print "y^x^z"
	elif ind==5:
		print "y^z^x"
	elif ind==6:
		print "(y^x)^z"
	elif ind==7:
		print "(y^z)^x"
	elif ind==8:
		print "z^x^y"
	elif ind==9:
		print "z^y^x"
	elif ind==10:
		print "(z^x)^y"
	elif ind==11:
		print "(z^y)^x"

main()