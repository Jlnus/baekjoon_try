import itertools

N = int(input())
nlist = list(map(int, input().split()))

max = 0
for list in itertools.permutations(nlist, N):
    nsum = 0
    for i in range(N-1):
        nsum += abs(list[i] - list[i+1])
    max = nsum if nsum > max else max

print(max)
