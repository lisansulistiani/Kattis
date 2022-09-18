r_c = input()
r = int(r_c.split()[0])
c = int(r_c.split()[1])
land = ['.']*r
for i in range (0,r):
    land[i]=['.']*c

for i in range(0,r):
    land_inp = input()
    land[i]=list(land_inp)

zero_car = 0
one_car = 0
two_car = 0
three_car = 0
four_car = 0

for i in range(0,r):
    for k in range(0,c):
        if(i+1<r and k+1<c and "#" not in land[i][k]+land[i+1][k]+land[i][k+1]+land[i+1][k+1]):
            lahan = land[i][k]+land[i+1][k]+land[i][k+1]+land[i+1][k+1]
            lahan = list(lahan)
            if lahan.count('X')==0: zero_car+=1
            elif lahan.count('X')==1: one_car+=1
            elif lahan.count('X')==2: two_car+=1
            elif lahan.count('X')==3: three_car+=1
            elif lahan.count('X')==4: four_car+=1
print(zero_car,one_car,two_car,three_car,four_car,sep='\n')
            
