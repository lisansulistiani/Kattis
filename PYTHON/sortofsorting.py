n = int(input())
c = []
while(n!=0):
    a = []
    for i in range(0,n):
        a.append(input())
    a=sorted(a,key=lambda x:x[:2])
    c.append(a)
    #print(*sorted(a),sep="\n",end="\n")
    n=int(input())

for i in range(0,len(c)):
    print(*c[i],sep="\n")
    if(i<len(c)-1):
        print()
