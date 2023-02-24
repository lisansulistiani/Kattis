n = int(input())
arr = [None]*3
for i in range(0,3):
    arr[i] = list(map(int,input().split()))
for k in range(0,n):
    new_arr = list()
    for i in range(0,3):
        new_arr.append(arr[i][k])
    print(sorted(new_arr)[1],end=" ")