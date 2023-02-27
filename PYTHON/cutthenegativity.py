n = int(input())
costs = list()
for i in range(0,n):
    costs.append(list(map(int,input().split())))
res = list()
for i in range(0,n):
    for k in range(0,n):
        if(costs[i][k]!=-1):
            res.append(f'{i+1} {k+1} {costs[i][k]}')
print(len(res))
print("\n".join(res))