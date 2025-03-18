a = int(input())
b = int(input())
c = int(input())
delta = pow(b,2) - 4 * a * c
print(2 if delta>0 else 1 if delta==0 else 0)