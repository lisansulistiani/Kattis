inp = list(map(int,list(input())))
pattern = [3,2,1,0]
result = [None]*4
for i in range(4):
    result[i]=[None]*4
for i in range (0,len(inp)):
    temp = inp[i]
    for k in range(0,len(pattern)):
        if(temp>=pow(2,pattern[k])):
            result[k][i]='*'
            temp-=pow(2,pattern[k])
        else:
            result[k][i] = '.'
for i in range(len(result)):
    for k in range(len(result[i])):
        if(k==2):
            print("   ",end='')
        elif(k!=2 and k!=0):
            print(" ", end='')
        print(result[i][k],end="")
    print()
