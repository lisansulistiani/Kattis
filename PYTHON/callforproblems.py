n = int(input())
is_odd = 0
for i in range(n):
    d = int(input())
    is_odd+=(1 if d%2!=0 else 0)
print(is_odd)