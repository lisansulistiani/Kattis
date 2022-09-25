number = input().replace('0','')
while(len(number)>1):
    total = 1
    for item in number:
        total=int(item)*total
    number = str(total).replace('0','')
print(number)