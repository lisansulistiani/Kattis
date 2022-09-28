bricks = int(input())
brick = list(map(int,input().split()))
tower = 0
start = True
t = []
for item in brick:
    if(start):
        current = item
        t.append(current)
        start = False
    else:
        if(current<item):
            tower+=1
            start = True
            print(t)
            t = []
        else:
            current = item
            t.append(current)
            
print(tower)