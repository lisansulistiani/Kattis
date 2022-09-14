tc = int(input())
curr = 7
for i in range(tc):
    command = input()
    if("op" in command and curr<10):
        curr+=1
    elif("ned" in command and curr>0):
        curr-=1
print(curr)