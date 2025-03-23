N = int(input())
items = list()
for i in range(N):
    items.append(input())
M = int(input())
suspicious = list()
for k in range(M):
    suspicious.append(input().split())

pairs = [items, []]

for item in suspicious:
  if any(x in pairs[0] for x in item):
    x = pairs[0].index(item[1])
    pairs[1].append(pairs[0][x])
    pairs[0].remove(pairs[0][x])

if pairs[0] and pairs[1]:
  print(" ".join(pairs[0]))
  print(" ".join(pairs[1]))
else:
  print("impossible")