l, h = map(int,input().split())
combinations = 0
for i in range(l,h):
    number = str(i)
    if("0" not in number):
        stop = False
        for digit in set(number):
            if(number.count(digit)>1):
                stop = True
                break
        if(not stop):
            nexts = False
            for digit in set(number):
                if(i%int(digit)!=0):
                    nexts = True
                    break
            if(not nexts):
                combinations+=1
print(combinations)