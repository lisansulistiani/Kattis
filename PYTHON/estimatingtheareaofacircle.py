import math
r,m,c=list(map(float,input().split()))
while(r!=0 and m!=0 and c!=0):
    print(f'{math.pi*pow(r,2)} {4*(c/m)*pow(r,2)}')
    r,m,c=list(map(float,input().split()))