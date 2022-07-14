prime_list = [2]
last = 3


def prime(x):
    global last
    global prime_list
    num_range = x
    next_num = last  # 다음 소수
    while next_num <= num_range:
        for p in prime_list:
            if p > next_num / p:  # 검색 범위 축소하여 더이상 없는 것으로 간주하고 소수로 판정
                prime_list.append(next_num)
                break
            if next_num % p == 0:
                break
        next_num += 2
    last = next_num


while(1):
    x = int(input())
    if x == 0:
        break
    print(x, '=', end=' ')
    prime(x)
    cnt = 0
    for i in prime_list:
        if x - i in prime_list:
            print(i, '+', x-i)
            cnt += 1
            break
    if cnt == 0:
        print("Goldbach's conjecture is wrong.")
