n = int(input())
d = list(map(int,input().split()))
arr = [None]*n
arr[0] = 1
count = 2
for i in range(0,len(d)):
    arr[d[i]+1] = count
    count+=1
print(*arr)