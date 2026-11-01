x=int(input())
max = x
while(x>=0):
    if max<x:
        max = x 
    x=int(input())
print(max)