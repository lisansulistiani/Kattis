k = int(input())
friends = []
for i in range(0,k):
    inp = input()
    friend_name = inp.split()[0]
    likes = int(inp.split()[1])
    tgl = inp.split()[2]
    dob = int(inp.split()[2].split('/')[0])
    mob = int(inp.split()[2].split('/')[1])
    check = False
    for i in range(0,len(friends)):
        if(tgl in friends[i]):
            if(int(friends[i].split()[1])<likes):
                friends[i]=inp
                check = True
                break
            else:
                check=True
    if(not check):
        friends.append(inp)
    
                
    '''
    if(mob not in friends):
        friends[mob]={}
        friends[mob][dob]={}
        friends[mob][dob][likes]=friend_name
    else:
        if(dob in friends[mob]):
            cur_like = list(friends[mob][dob])[0]
            if(likes>cur_like):
                friends[mob][dob].pop(cur_like,None)
                friends[mob][dob][likes]=friend_name
        else:
            friends[mob][dob]={}
            friends[mob][dob][likes]=friend_name
    '''
print(len(friends))
friends = sorted(friends)
for x in friends:
    print(x.split()[0])
