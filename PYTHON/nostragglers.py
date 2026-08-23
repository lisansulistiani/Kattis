a = int(input())
total = 0
for i in range(a):
    x = input()
    if "IN" in x:
        total += int(x.split()[-1])
    else:
        total -= int(x.split()[-1])
if total == 0:
    print("NO STRAGGLERS")
else:
    print(total)