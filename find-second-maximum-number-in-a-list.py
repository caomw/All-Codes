n = int(raw_input())
list = raw_input().split()

list = map(int ,list)

maxi = max(list)
while list.count(maxi):
    list.remove(maxi)
    
print max(list)