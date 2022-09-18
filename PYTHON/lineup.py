a=[]
n=int(input())
isDecrease = True
isIncrease = True
for i in range(n):
    a.append(input())

for i in range(1,n):
    if(a[i-1]>a[i] and isDecrease):
        isDecrease=True
    else:
        isDecrease=False
    if(a[i-1]<a[i] and isIncrease):
        isIncrease=True
    else:
        isIncrease = False
if(isDecrease):
    print("DECREASING")
elif(isIncrease):
    print("INCREASING")
else:
    print("NEITHER")
