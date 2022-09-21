n = input()
card = []
check = False
for i in range(0,len(n)):
    if(n[i] in card):
        print(0)
        check=True
        break
    else:
        card.append(n[i])
if(not check):
    print(1)
