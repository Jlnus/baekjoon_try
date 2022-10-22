nlist = [1] * 1000001
arr = []
t = int(input())
for i in range(t):
    arr += [int(input())]
for i in range(2, 1000001):
    j = i
    while j < 1000001:
        nlist[j] += i
        j += i

for i in range(2, 1000001):
    nlist[i] += nlist[i-1]

for i in arr:
    print(nlist[i])
