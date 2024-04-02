def solution(n):
    visit = [-1] * n
    answers = []

    def queen(row):
        if row >= n:
            answers.append(1)
            return

        for col in range(n):
            visit[row] = col
            ok = 1
            for i in range(row):
                if visit[row] == visit[i] or row - i == abs(visit[row] - visit[i]):
                    ok = 0
                    break
            if ok == 1:
                queen(row + 1)

    queen(0)

    return len(answers)
 