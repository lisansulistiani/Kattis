def areas(x1,y1,x2,y2,x3,y3):
    return abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2

x1,y1 = map(int,input().split())
x2,y2 = map(int,input().split())
x3,y3 = map(int,input().split())
tree = int(input())
my_tree = 0
area = areas(x1,y1,x2,y2,x3,y3)
for i in range(tree):
    x4,y4 = map(int,input().split())
    if(area == areas(x4,y4,x2,y2,x3,y3)+areas(x1,y1,x4,y4,x3,y3)+areas(x1,y1,x2,y2,x4,y4)):
        my_tree+=1    
print(area)   
print(my_tree)
