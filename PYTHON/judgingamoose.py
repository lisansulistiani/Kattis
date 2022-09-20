l, r = list(map(int, input().split()))

if(l==0 and r==0):
    print("Not a moose")
elif(l==r):
    print(f"Even {l+r}")
else:
    if(l>r):
        print(f"Odd {l*2}")
    else:
        print(f"Odd {r*2}")