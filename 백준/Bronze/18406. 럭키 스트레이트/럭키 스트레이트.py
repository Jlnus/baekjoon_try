N = input()  # "123402"
idx = len(N) // 2  # 6
left = 0

for i in range(idx):
    left += int(N[i])

if left * 2 == sum(map(int, N)):
    print("LUCKY")
else:
    print("READY")
