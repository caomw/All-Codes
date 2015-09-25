from math import sqrt
 
i, k, s = map(int, raw_input().split())
ai, bi = map(float, raw_input().split())
 
k -= i
flag = abs(k)%2
 
x = sqrt(2)
y = sqrt(3)
 
 
if k%2:
	a = x*(ai + bi) - x*y*(ai - bi)
	b = x*(ai - bi) + x*y*(ai + bi)
	ai, bi = a, b
 
k /= 2
 
if k <= 0:
	k += flag

 
ai *= 2**(4*k - s)
bi *= 2**(4*k - s)
 
print ai + bi  