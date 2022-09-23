tc = int(input())
arr = [None]*tc
for i in range(tc):
    arr[i]=int(input())
numb = arr[0]
i = 1
while(i<len(arr)):
    if(arr[i]%numb==0): 
        print(arr[i])
        i+=1
        if(i<len(arr)):
            numb = arr[i]
            i+=1
    else:
        i+=1
    