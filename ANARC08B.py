def main():
	encode = ["063","010","093","079","106","103","119","011","127","107"]

	while True:
		st = raw_input()

		if st[0]=="B":
			break

		st1,st2 = st.split("+")
		n1 = int(st1)
		n2 = st2[:len(st2)-1]

		i=0
		num1 = ""
		dig = ""
		while i<len(st1):
			dig+=st1[i]
			i+=1
			dig+=st1[i]
			i+=1
			dig+=st1[i]
			i+=1
			num1 += str(encode.index(dig))

			dig = ""


		i=0
		num2 = ""
		dig = ""
		while i<len(st2)-1:
			dig+=st2[i]
			i+=1
			dig+=st2[i]
			i+=1
			dig+=st2[i]
			i+=1

			num2 += str(encode.index(dig))

			dig = ""

		c = int(num1)+int(num2)
		c = str(c)

		for i in c:
			st += encode[int(i)]
		print st


main()