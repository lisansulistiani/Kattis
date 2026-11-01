a = int(input())
total = 0
for i in range(a):
    x = input()
    val = int(x.split()[0])
    if "nej" in x and val>total:
        total = val

print(total)