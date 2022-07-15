res = {"black": 0, "brown": 1, "red": 2, "orange": 3, "yellow": 4,
       "green": 5, "blue": 6, "violet": 7, "grey": 8, "white": 9}
x = str(input())
y = str(input())
z = str(input())
if x != "black":
    print(res[x], end='')
if y != "black":
    print(res[y], end='')
if x != "black":
    for i in range(res[z]):
        print('0', end='')
else:
    print('0')
