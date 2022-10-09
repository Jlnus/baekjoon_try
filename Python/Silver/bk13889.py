import itertools

# input
N = int(input())
stats = [[i for i in range(N)]for j in range(N)]

for i in range(N):
    stats[i] = list(map(int, input().split()))

# combination index
index = [i for i in range(1, N+1)]
index_list = []
for i in itertools.combinations(index, N//2):
    index_list.append(list(i))

# searching
answer = 100000
index_len = len(index_list)
for i in range(index_len//2):
    sum = 0
    for j in list(itertools.combinations(index_list[i], 2)):
        sum += stats[j[1] - 1][j[0] - 1]
        sum += stats[j[0] - 1][j[1] - 1]
    for k in list(itertools.combinations(index_list[-i-1], 2)):
        sum -= stats[k[0] - 1][k[1] - 1]
        sum -= stats[k[1] - 1][k[0] - 1]
    answer = min(answer, abs(sum))
print(answer)
