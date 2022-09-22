tc = int(input())
for i in range(tc):
    one = input().replace(' ','')
    two = input().replace(' ','')
    print(*list(str(int(one)+int(two))))