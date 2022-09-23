tc = int(input())
room = list()
for i in range(tc):
    state, name = input().split()
    if(state=="entry"):
        if(name in room):
            print(f'{name} entered (ANOMALY)')
        else:
            room.append(name)
            print(f'{name} entered')
    else:
        if(name in room):
            print(f'{name} exited')
            room.remove(name)
        else:
            print(f'{name} exited (ANOMALY)')