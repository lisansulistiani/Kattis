n = int(input())

space_junk = list(map(int,input().split()))
min_space_junk = min(space_junk)
day = space_junk.index(min_space_junk)
print(day)