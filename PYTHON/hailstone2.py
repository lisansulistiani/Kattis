start =int(input())
length = 1
while(start!=1):
    if(start%2==0):
        next_seq = int(start/2)
    else: next_seq = (3*start)+1
    length+=1
    start = next_seq
print(length)