queue = [input() for i in range(int(input()))]
for i in range(int(input())):
    event = input()
    if("cut" == event.split()[0]):
        new_person = event.split()[1]
        who = event.split()[2]
        queue.insert(queue.index(who),new_person)
    elif("leave" == event.split()[0]):
        who = event.split()[1]
        queue.remove(who)
print("\n".join(queue))