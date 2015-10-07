import sys

def main():
	t = int(raw_input())
	for _ in range(t):
		n = float(raw_input())
 
		for hr in xrange(12):
			for minu in xrange(60):
				lis = []
				if abs(abs(minu*5.5-hr*30)-n)<(120**-1) or abs(abs(minu*5.5-hr*30)-360+n)<(120**-1):
					st = ["",""]
					if (hr<10):
						st[0]="0"

					if minu<10:
						st[1]="0"
					
					print "%s%d:%s%d"%(st[0],hr,st[1],minu)

main()
