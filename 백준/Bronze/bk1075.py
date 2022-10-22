x = int(input())
y = int(input())
x //=100
x *=100
while(x % y != 0):
  x+=1
print(str(x)[-2],end='')
print(str(x)[-1])
