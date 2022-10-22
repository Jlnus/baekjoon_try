nlist = list(map(int, input().split()))
answer = []


default = [1, 1, 2, 2, 2, 8]
for i in range(6):
    answer.append(str(default[i] - nlist[i]))

answer = " ".join(answer)
print(answer)
