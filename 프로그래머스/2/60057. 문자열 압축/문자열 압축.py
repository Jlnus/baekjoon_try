def solution(s):
    length = len(s)
    if length == 1:
        return 1
    min = 1000

    for i in range(1, length):
        split = ""
        result = []
        num = 1  # 반복 횟수
        for j in range(length // i):
            if split == s[i * j : i * (j + 1)]:
                num += 1

            else:
                if num > 1:
                    result.append(str(num))
                result.append(split)
                split = s[i * j : i * (j + 1)]
                num = 1

        if num > 1:
            result.append(str(num))
        result.append(split)
        result.append(s[length // i * i : length // i * i + length % i])

        result = "".join(result)
        min = len(result) if len(result) < min else min

    return min
