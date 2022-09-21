W = int(input())
N = int(input())
area = 0
for i in range(0,N):
    wi_li = input()
    wi=int(wi_li.split()[0])
    li=int(wi_li.split()[1])
    area+=(wi*li)

print(area//W)
