import collections
contents = []
while True:
    try:
        line = input()
    except EOFError:
        break
    if("+---+" not in line):
        line = line.replace(':','')
        line = line.replace('.','')
        contents.append(line.split("|")[1:-1])

white = {"K":[],"Q":[],"R":[],"B":[], "N":[],"P":[]}
black = {"k":[],"q":[],"r":[],"b":[], "n":[],"p":[]}
column = ["a","b","c","d","e","f","g","h"]
row = [8,7,6,5,4,3,2,1]
for i in range(0,len(contents)):
    for k in range(0,len(contents[i])):
        types = contents[i][k]
        if(types in white):
            white[types].append(f'{column[k]}{row[i]}')
        if(types in black):
            black[types].append(f'{column[k]}{row[i]}')
            
for key_white, key_black in zip(white,black):
    white[key_white] = sorted(white[key_white], key=lambda x: (int(x[-1]),x[-2]))
    black[key_black] = sorted(black[key_black], key=lambda x: (-int(x[-1]),x[-2]))
                        
print("White: ",end="")
ans = []
for i in white:
    ans.extend([i+item if i!="P" else item for item in white[i]])
print(",".join(ans))
print("Black: ",end="")
ans = []
for i in black:
    ans.extend([i.upper()+item if i!="p" else item for item in black[i]])
print(",".join(ans))