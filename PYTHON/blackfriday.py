n = int(input())
dice = [int(x) for x in input().split()]
maximum=0
valid = True
for i in range(0,len(dice)):
    occ = dice.count(dice[i])
    if(occ==1):
        if(dice[i]>maximum):
            maximum = dice[i]
            idx = i
        valid=False
if(valid):
    print("none")
else:
    print(idx+1)
