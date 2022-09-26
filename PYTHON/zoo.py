tc = int(input())
idx = 1
while(tc!=0):
    animal = {}
    for i in range(tc):
        inp = input().split()
        if(inp[-1].lower() in animal):
            animal[inp[-1].lower()]+=1
        else:
            animal[inp[-1].lower()] = 1
    print(f'List {idx}:')
    animal = dict(sorted(animal.items()))
    for item in animal:
        print(f'{item} | {animal[item]}')
    idx+=1
    tc = int(input())