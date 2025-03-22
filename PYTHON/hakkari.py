n, m = map(int, input().split())
mines = list()
for i in range(n):
    grid = input()
    for k in range(m):
        if grid[k]=="*":
            mines.append(str(i+1)+" "+str(k+1))
print(len(mines))
print("\n".join(mines))