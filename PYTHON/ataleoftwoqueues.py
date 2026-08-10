n, m = map(int, input().split())
left = sum(list(map(int,input().split())))
right = sum(list(map(int,input().split())))
print("either" if left==right else "left" if left<right else "right")