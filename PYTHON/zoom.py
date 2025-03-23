n, k = map(int, input().split())
x = list(map(int, input().split()))
q = n//k
for i in range(k, q*k+1, k):
    print(x[i-1], end=" ")