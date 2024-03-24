n, m = map(int, input().split())
arr = list(range(1,n+1))
for _ in range(m):
    i = int(input())
    arr[i-1], arr[i] = arr[i], arr[i-1]
for i in arr: print(i)