load = input().split()
input1 = int(load[0]) + 1
input2 = int(load[1]) + 1

x = input().split()
y = input().split()


A = [[] for _ in range(input1)]

# set initial values
for i in range(0,input1):
    for j in range(0,input2):
        A[i].append(0)

for i in range(1,input1 - 1):
    for j in range(1,input2 - 1):
        if x[i-1] == y[j-1]:
            A[i][j] = A[i-1][j-1] + 1
        else:
            A[i][j] = max(A[i-1][j],A[i][j-1])

i = input1 - 1 
j = input2 - 1
LCS = []
while i >= 1 and j >= 1:
    if x[i-1] == y[j-1]:
        LCS.append(x[i-1])
        i -= 1
        j -= 1
    elif A[i-1][j] > A[i][j-1]:
        i -= 1
    else:
        j -= 1

LCS.reverse()

for i in LCS:
    print(i, " ")