res = {"black": 0, "brown": 1, "red": 2, "orange": 3, "yellow": 4,
       "green": 5, "blue": 6, "violet": 7, "grey": 8, "white": 9}
x = input()
y = input()
z = input()
if x != 'black':
    print(res[x], end='')
print(res[y], end='')
if x != 'black' or y != 'black':
    for i in range(res[z]):
        print('0', end='')
    print('')
