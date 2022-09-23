tc = int(input())
while(tc!=0):
    list_one = list()
    list_two = list()
    for i in range(tc):
        list_one.append(int(input()))
    for i in range(tc):
        list_two.append(int(input()))
    one_temp = sorted(list_one)
    two_temp = sorted(list_two)
    output = [None]*tc
    i = 0
    for item in one_temp:
        idx = list_one.index(item)
        output[idx] = two_temp[i]
        i+=1
    print("\n".join([str(item) for item in output]))
    print()
    tc=int(input())