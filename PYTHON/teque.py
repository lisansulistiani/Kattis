from sys import stdin, stdout
from collections import deque
te1 = deque()
te2 = deque()
# applies 2 deques since insert lead to TLE
for i in range(int(stdin.readline())):
    inp = stdin.readline().split()
    cases = inp[0]
    val = int(inp[1])
    if("push_back" in cases):
        te2.append(val)
        if(len(te1)<len(te2)):
            te1.append(te2.popleft())
    elif("push_front" in cases):
        te1.appendleft(val)
        if(len(te1)>len(te2)):
            te2.appendleft(te1.pop())
    elif("push_middle" in cases):
        if(len(te1)<len(te2)):
            te1.append(te2.popleft())
        te2.appendleft(val)            
    elif("get" in cases):
        if(val>= len(te1)):
            stdout.write(str(te2[val-len(te1)])+"\n")
        else:
            stdout.write(str(te1[val])+"\n")
        