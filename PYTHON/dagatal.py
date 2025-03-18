# year:2019
m = int(input()) #month
if m!=2:
    if m<8:
        if m%2==0:
            print(30)
        else:
            print(31)
    else:
        if m%2==0:
            print(31)
        else:
            print(30)
else:
    print(28)