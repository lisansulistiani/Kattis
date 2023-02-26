n = int(input())
course = list(map(int,list(input())))
curr = course[0]
awake = 0
if(curr==1):
    coffe = 2
    awake = 1
else:
    coffe = 0
for i in range(1,len(course)):
    if(course[i]==0):
        if(coffe>0):
            awake+=1
            coffe-=1
    else:
        awake+=1
        coffe=2
print(awake)