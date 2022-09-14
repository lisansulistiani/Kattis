n, p , s = input().split()
for i in range (int(s)):
    c = input().split()
    if(p in c[1:]):
        print("KEEP")
    else:
        print("REMOVE")