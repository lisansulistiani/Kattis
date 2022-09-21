tc = int(input())
for i in range(tc):
    item = input().split()
    
    if("simon" in item[0] and "says" in item[1]):
        print(" ".join(item[2:]).rstrip())
    else:
        print()