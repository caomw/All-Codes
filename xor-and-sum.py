a = int(input())
b = int(input())

ans = 0
for i in range(314159):
	mod = int(1e9+7)
	
	ans += (a^(b<<i))%mod

print (ans)