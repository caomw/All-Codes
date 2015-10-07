st = raw_input()
i,ch = raw_input().split()
i = int(i)

st = st[:i]+ch+st[i+1:]

print st
