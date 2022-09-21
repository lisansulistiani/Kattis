seq = list(map(int,input().split()))
i = 0
for i in range(len(seq)-1):
    for k in range(len(seq)-i-1):
        if(seq[k]>seq[k+1]):
            temp = seq[k]
            seq[k]=seq[k+1]
            seq[k+1]=temp
            print(*seq)
