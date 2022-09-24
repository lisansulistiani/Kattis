seq = list(map(int, input().split()))
seq.sort()
if(seq[1]-seq[0]==seq[2]-seq[1]): print(seq[2]+seq[2]-seq[1])
else:
    if(seq[1]-seq[0]>seq[2]-seq[1]):
        print(seq[0]+seq[2]-seq[1])
    else:
        print(seq[1]+seq[1]-seq[0])