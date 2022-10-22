m, n = map(int, input().split())
a = 0
b = 0
c = 0
for i in range(1, 14):
    a += m // (5**i)
    b += n // (5**i)
    c += (m-n) // (5**i)
x = a-b-c if a-b-c > 0 else 0
a = 0
b = 0
c = 0
for i in range(1, 31):
    a += m // (2**i)
    b += n // (2**i)
    c += (m-n) // (2**i)
y = a-b-c if a-b-c > 0 else 0
print(x if x < y else y)
