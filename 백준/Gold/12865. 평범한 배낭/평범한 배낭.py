N, K = map(int, input().split())
item = [(0,0)]
for i in range(N):
    W, V = map(int, input().split())
    item.append((W,V))

table = [[0] * (K+1) for i in range(N+1)]

for i in range(1, N+1):
    for j in range(1, K+1):
        if item[i][0] > j:
            table[i][j] = table[i-1][j]
        else:
            table[i][j] = max(table[i-1][j], item[i][1]+table[i-1][j - item[i][0]])

print(table[-1][-1])