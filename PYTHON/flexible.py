w, p = list(map(int,input().split()))
l = list(map(int,input().split()))
l2 = [None]*(w)
l2[w-1] = w
for k in range(p):
    l2[l[k]-1]=l[k]
    l2[w-l[k]-1]=w-l[k]
for i in range(p):
    for k in range(i+1,p):
        l2[l[k]-l[i]-1]=l[k]-l[i]
print(" ".join([str(item) for item in l2 if item!=None]))