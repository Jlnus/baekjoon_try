S = (int(i) for i in input())
prev = next(S)
cnt = 0

for i in S:
    if i != prev:
        cnt += 1
        prev = i

print(cnt // 2 + cnt % 2)
