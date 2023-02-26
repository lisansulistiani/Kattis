import math
def find_coor(c, number):
    return [(i, sub.index(number)) for (i, sub) in enumerate(c) if number in sub][0]

c = list()
for i in range(0,3):
    c.append(list(map(int,input().split())))
length = 0
prev_point = find_coor(c,1)
for i in range(2,10):
    curr_point = find_coor(c,i)
    if(prev_point[0]==curr_point[0]):
        length+=abs(prev_point[1]-curr_point[1])
    elif(prev_point[1]==curr_point[1]):
        length+=abs(prev_point[0]-curr_point[0])
    else:
        p = math.sqrt(math.pow((prev_point[0]-curr_point[0]),2) + math.pow((prev_point[1]-curr_point[1]),2))
        length+=p
    prev_point = curr_point
print(length)