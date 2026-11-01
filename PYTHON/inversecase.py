x = input()
for k in range(0,len(x),1):
    if ord(x[k])>=65 and ord(x[k])<=90:
        print(chr(ord(x[k])+32),end="")
    elif(ord(x[k])>=97 and ord(x[k])<=122):
        print(chr(ord(x[k])-32),end="")
    else:
        print(x[k],end="")