n, k, d = map(int, input().split())
attend = 0
for i in range(n):
    d_i = int(input())
    if d_i + 14 <= k+d:
        attend+=1
print(attend)