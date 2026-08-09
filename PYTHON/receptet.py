costs = 0
for i in range(int(input())):
    h, b, k = map(int, input().split())
    if h<b:
        costs += (b-h)*k
print(costs)