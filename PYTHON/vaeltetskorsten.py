a = int(input())
total = 0
for i in range(a):
    x = input()
    if "nej" in x:
        total = int(x.split()[0])

print(total)