n = int(input())
won = 0
for i in range(n):
    k = input()
    if "CD" not in k:
        won+=1
print(won)