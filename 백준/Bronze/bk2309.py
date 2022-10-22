nlist = []
for i in range(9):
    nlist.append(int(input()))
nlist.sort()
x = sum(nlist)-100
for i in range(8):
    j = i+1
    while(j < 9):
        if nlist[i] + nlist[j] == x:
            a, b = i, j
        j += 1
del nlist[b]
del nlist[a]
for i in range(7):
    print(nlist[i])
