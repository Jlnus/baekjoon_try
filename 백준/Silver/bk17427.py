g = 0
n = int(input())
for i in range(1, n+1):
    g += (n // i) * i
print(int(g))
