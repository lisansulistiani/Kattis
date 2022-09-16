n = int(input())
m = int(input())
star = m//n
lebih = m%n
for i in range(0,lebih):
    print("*"*(star+1))
for i in range(lebih,n):
    print("*"*star)
