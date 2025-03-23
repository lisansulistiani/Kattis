import math
T = int(input())
for i in range(T):
    N = int(input())
    if(N%2!=0):
        print("O",end="")
    if(N == math.isqrt(N)**2):
        print("S",end="")
    if(N%2==0 and N!= math.isqrt(N)**2):
        print("EMPTY", end="")
    print()