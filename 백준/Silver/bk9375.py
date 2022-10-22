t = int(input())
for i in range(t):
    x = int(input())
    clist = dict()
    for j in range(x):
        tmp, cloth = map(str, input().split())
        if cloth in clist:
            clist[cloth] += 1
        else:
            clist[cloth] = 1
    cnt = 1
    for j in clist.values():
        cnt *= j+1
    print(cnt-1)
