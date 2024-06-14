N = int(input())
board = [[0 for i in range(N)] for j in range(N)]

K = int(input())
for i in range(K):
    a, b = map(int, input().split())
    board[a - 1][b - 1] = 1
board[0][0] = 2

direction = []
L = int(input())
for i in range(L):
    direction.append(list(input().split()))

t = 0  # 현재 시간
dir_now = 0  # 0:오른쪽, 1:아래, 2:왼쪽, 3:위
i = 0  # 현재 위치 행
j = 0  # 현재 위치 열
snake = [[0, 0]]  # 뱀 위치 목록, 꼬리부터
while 1:
    # 방향 변환 정보 확인
    if direction != [] and t == int(direction[0][0]):
        dir_now = (dir_now + 1) % 4 if direction[0][1] == "D" else (dir_now - 1) % 4
        del direction[0]
    # 방향전환 후 현재 위치
    if dir_now == 0:
        j += 1
    elif dir_now == 1:
        i += 1
    elif dir_now == 2:
        j -= 1
    elif dir_now == 3:
        i -= 1
    # 충돌
    if i >= N or i < 0 or j >= N or j < 0 or board[i][j] == 2:
        print(t + 1)
        break
    snake.append([i, j])
    # 사과 확인 후 이동
    if board[i][j] != 1:
        board[snake[0][0]][snake[0][1]] = 0
        del snake[0]
    board[i][j] = 2
    t += 1
