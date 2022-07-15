def swap(N, list, start, dir):
    if dir == 0:  # 가로
        list[start], list[start+1] = list[start+1], list[start]
    else:  # 세로
        list[start], list[start+N] = list[start+N], list[start]


def count(N, list):
    max = 0
    for j in range(N):
        cnt = 1
        for i in range(j*N+1, j*N+N):
            if list[i-1] == list[i]:
                cnt += 1
            else:
                max = cnt if max < cnt else max
                cnt = 1
    for j in range(N):
        cnt = 1
        for i in range(j+N, N*N, N):
            if list[i-N] == list[i]:
                cnt += 1
            else:
                max = cnt if max < cnt else max
                cnt = 1
    return max


N = int(input())
list = []
for i in range(N):
    list += input()

max = 0
for i in range(N*N):
    if i % N == N-1:
        continue
    tmplist = list
    swap(N, tmplist, i, 0)
    tmp = count(N, tmplist)
    max = tmp if max < tmp else max
    

for i in range(N*N-N):
    tmplist = list
    swap(N, tmplist, i, 1)
    tmp = count(N, tmplist)
    max = tmp if max < tmp else max
print(max)
