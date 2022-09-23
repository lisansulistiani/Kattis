C = list(input())
K = list(input())
idx = 1
for item1, item2 in zip(C, K):
    # print(f'{ord(item1)%65} {ord(item2)%65}')
    if(idx%2==0):
        print(chr(((ord(item1)%65+ord(item2)%65)%26)+65),end="")
    else:
        print(chr(((ord(item1)%65-ord(item2)%65)%26)+65),end="")
    idx+=1
