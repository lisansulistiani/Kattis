tc = int(input())
for i in range(tc):
    name, began, birth, course = input().split()
    if(int(began.split('/')[0])>=2010):
        print(f'{name} eligible')
    elif(int(birth.split('/')[0])>=1991):
        print(f'{name} eligible')
    else:
        if(int(course)>=41):
            print(f'{name} ineligible')
        else:
            print(f'{name} coach petitions')