n, m, k = map(int, input().split())
arr = ['.']*n
for i in range(n):
    arr[i]=['.']*m
for i in range(k):
    row, col = map(int, input().split())
    arr[row-1][col-1] = '*'
for i in range(n):
    print(''.join(arr[i]))