a = list(map(int, input().split()))
b = sum(list(map(int, input().split())))
c = sum(list(map(int, input().split())))

print("Button 1" if b>c else "Button 2" if b<c else "Oh no")