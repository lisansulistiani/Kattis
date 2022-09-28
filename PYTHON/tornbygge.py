bricks = int(input())
brick = list(map(int,input().split()))
tower = 0
current = 0
for i in range(0,len(brick)):
    if(current==0 or current<brick[i]):
        tower+=1
    current=brick[i]
            
print(tower)