#undone
circle = [" ","\'","A","B","C","D","E","F",\
    "G","H","I","J","K","L","M","N","O","P",\
    "Q","R","S","T","U","V","W","X","Y","Z"]

tc = int(input())
for i in range(tc):
    aphorism = list(input())
    aphorism = sorted(aphorism)
    # print(aphorism)
    now = circle.index(aphorism[0])
    total = 0;
    for i in range(0,len(aphorism)):
        nexts = circle.index(aphorism[i])
        temp = (nexts-now)
        now = nexts
        if(temp==0):
            total+=1
        else:            
            total += ((temp//4)*1)+(temp%4)/4+1
    print(total)