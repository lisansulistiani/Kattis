t = int(input())
for i in range(t):
    n = int(input())
    pn = []
    for k in range(n):
        inp = input()
        pn.append(inp)
    pn.sort(reverse=True)
    unique = True
    c=set()
    for item in pn:
        if(item in c):
            unique=False
            break
        for k in range(1,len(item)+1):
            c.add(item[:k])
    if(not unique):
        print("NO")
    else:
        print("YES")
        
