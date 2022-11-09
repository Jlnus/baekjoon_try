import itertools

N, M = map(int, input().split())
nlist = [i for i in range(1, N+1)]

for i in list(itertools.permutations(nlist, M)):
    for j in range(len(i)):
        print(i[j], end=" ")
    print("")