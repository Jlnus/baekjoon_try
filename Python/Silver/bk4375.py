while True:
    try:
        n = int(input())
    except EOFError:
        break
    tmp = '1'
    cnt = 1
    while int(tmp) % n != 0:
        tmp = tmp+'1'
        cnt += 1
    print(cnt)
