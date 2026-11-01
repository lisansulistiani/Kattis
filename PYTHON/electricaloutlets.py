for i in range(0,int(input()),1):
    l = list(map(int, input().split()))
    total = sum(l[1:])-(l[0]-1)
    print(total)