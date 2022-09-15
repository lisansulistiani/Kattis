def proses(arr):
    for i in range(0,4,1):
        for k in range(0,4,1):
            if(arr[i][k]==0):
                for l in range(k+1,4):
                    if(arr[i][l]!=0):
                        arr[i][k]=arr[i][l]
                        arr[i][l]=0
                        break
            if(k-1>=0 and arr[i][k]==arr[i][k-1]):
                arr[i][k-1]+=arr[i][k]
                arr[i][k]=0
                for l in range(k+1,4):
                    if(arr[i][l]!=0):
                        arr[i][k]=arr[i][l]
                        arr[i][l]=0
                        break
    return arr
arr = [None]*4

for i in range(0,4,1):
    inp = input()
    arr[i] = [int(x) for x in inp.split()]

mode = int(input())
#0 = left; 1 = up; 2 = right; 3 = down
newarr=[None]*4
for i in range(0,4,1):
    newarr[i] = [None]*4
if(mode==0):
    proses(arr)
elif (mode==1):
    for i in range(0,4):
        newarr[i]=[arr[l][i] for l in range(0,4)]
    newarr = proses(newarr)
    for i in range(0,4,1):
       arr[i] = [newarr[l][i] for l in range(0,4)]         
elif (mode==2):
    for i in range(0,4):
        newarr[i]=[arr[i][l] for l in range(3,-1,-1)]
    newarr=proses(newarr)
    for i in range(0,4):
        arr[i]=[newarr[i][l] for l in range(3,-1,-1)]
elif (mode==3):
    for i in range(0,4):
        newarr[i]=[arr[l][i] for l in range(3,-1,-1)]
    newarr = proses(newarr)
    for i in range(0,4):
        arr[i]=[newarr[l][i] for l in range(0,4)]
    x=3
    for i in range(0,4):
        newarr[i]=arr[x]
        x-=1
    arr=newarr
for i in range(0,4):
    for k in range(0,4):
        print(arr[i][k],end=" ")
    print()
