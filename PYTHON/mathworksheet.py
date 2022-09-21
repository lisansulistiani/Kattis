tc = int(input())
out = ""
while(tc!=0):
    res = list()
    maximal = 0
    for k in range(tc):
        prob = input()
        a = int(prob.split()[0])
        b = int(prob.split()[-1])
        op = prob.split()[1]
        result = 0
        if("*" in op):
            result = a*b
        elif("-" in op): result = a-b
        elif("+" in op): result = a+b
        digit = len(list(str(result)))
        maximal = max(digit, maximal)
        res.append(result)
    
    now = ""
    for i in range (len(res)):
        o = str(res[i]).rjust(maximal)
        if(len(now)+len(o)<=50):
            now += o
            if(i<len(res)-1 and i+1<len(res) and len(now)+len(str(res[i+1]).rjust(maximal))<=50):
                now+=" "
        else:
            print(now)
            now=""
            now += o
            if(i<len(res)-1 and i+1<len(res) and len(now)+len(str(res[i+1]).rjust(maximal))<=50):
                now+=" "
    print(now)
    print()
    tc = int(input())
    