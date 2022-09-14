s = int(input())
knot = input().split()
learn_knot = input().split()
for item in knot:
    if(item not in learn_knot):
        print(item)
        break