inp = list(map(int,list(input().replace('-',''))))
pattern = [4,3,2,7,6,5,4,3,2,1]
total = 0
for i in range(0,len(inp)):
    total+=(inp[i]*pattern[i])
if(total%11==0): print(1)
else: print(0)