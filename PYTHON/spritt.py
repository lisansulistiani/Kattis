n, x = map(int,input().split())
sanitizer = 0
for i in range(n):
    sanitizer+=int(input())
print("Jebb" if sanitizer<=x else "Neibb")