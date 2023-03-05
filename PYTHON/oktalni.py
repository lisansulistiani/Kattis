binary = list(input())
decimal = 0
pangkat = len(binary)-1
for i in range(len(binary)):
    decimal+=(int(binary[i])*pow(2,pangkat))
    # print(decimal)
    pangkat-=1
sisa = [str(decimal%8)]
curr = decimal//8
while curr!=0:
    temp = curr%8
    sisa.insert(0,str(temp))
    curr = curr//8
print("".join(sisa))
