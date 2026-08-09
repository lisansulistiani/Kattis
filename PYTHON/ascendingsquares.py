x = int(input())

start = 3
curr = 1
curr = list()
curr.append(1)
for i in range(x-1):
    if(i==0):
        curr.append(curr[-1] + start)
    else:
        start+=2
        curr.append(curr[-1] + start)
print(curr)