l = dict(zip("abcdefghijklmnopqrstuvwxyz ", "qwertyuiopasdfghjklzxcvbnm "))
x = int(input())
m = input()
for i in range(0,x,1):
    print(l[m[i]],end="")