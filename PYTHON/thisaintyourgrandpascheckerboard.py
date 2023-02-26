def areConsecutive(arr, n):
    # Sort the array
    arr.sort()
    # checking the adjacent elements
    for i in range (1,n):
        if(arr[i]-arr[i-1]>1):
            return False;
    return True;

def find_idx(checkboard,element):
    indices = []
    for idx, value in enumerate(checkboard):
        if value==element:
            indices.append(idx)
    return indices
n = int(input())
checkboard = list()
for i in range(n):
    checkboard.append(list(input()))
stop = False
for i in range(0,n):
    res = checkboard[i].count("W") == checkboard[i].count("B")
    if(not res):
        stop = True
        break
    if(checkboard[i].count("W")>=3 or checkboard[i].count("B")>=3):
        idx_w = find_idx(checkboard[i],"W")
        if(areConsecutive(idx_w,len(idx_w))):
            stop = True
            break
        idx_b = find_idx(checkboard[i],"B")
        if(areConsecutive(idx_b,len(idx_b))):
            stop = True
            break

if(stop):
    print(0)
else:
    stop = False
    for i in range(0,n):
        new_checkboard = list()
        for k in range(0,n):
            new_checkboard.append(checkboard[k][i])
        res = new_checkboard.count("W") == new_checkboard.count("B")
        if(not res):
            stop = True
            break
            
        if(new_checkboard.count("W")>=3 or new_checkboard.count("B")>=3):
            idx_w = find_idx(new_checkboard,"W")
            if(areConsecutive(idx_w,len(idx_w))):

                stop = True
                break
            
            idx_b = find_idx(new_checkboard,"B")
            if(areConsecutive(idx_b,len(idx_b))):
                stop = True
                break   
    if(stop):
        print(0)
    else:
        print(1)
