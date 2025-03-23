first = input().split('|')
second = input().split('|')
res = list()
for i in range(len(first)):
    res.insert(i,first[i])
for k in range(len(second)):
    res[k] = res[k]+second[k]
print(" ".join(res))