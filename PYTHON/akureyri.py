n = int(input())
loc = dict()
for i in range(n):
    name = input()
    location = input()
    if location not in loc:
        loc[location] = 1
    else:
        loc[location] += 1
for item in loc:
    print(item, loc[item])