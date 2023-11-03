_ = int(input())
A = map(int, input().split())
B, C = map(int, input().split())
cnt = 0

for i in A:
    if B >= i:
        cnt += 1
    else:
        cnt += 1 - (-(i - B) // C)

print(cnt)
