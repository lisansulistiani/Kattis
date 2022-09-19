L, x = input().split()
denied, curr = 0, 0
for i in range(int(x)):
    stat = input()
    if("enter" in stat):
        if(curr+int(stat.split()[-1])<=int(L)):
            curr+=int(stat.split()[-1])
        else:
            denied+=1
    elif("leave" in stat):
        curr-=int(stat.split()[-1])
print(denied)