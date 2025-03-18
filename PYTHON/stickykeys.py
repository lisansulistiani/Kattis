t1 = input()
t2 = t1[0]
for char in t1:
    if(char!=list(t2)[-1]):
        t2+=char
print(t2)