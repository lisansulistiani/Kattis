from math import gcd
n = int(input())
ring = list(map(int,input().split()))
for i in range(1,len(ring)):
    pembagi = gcd(ring[0],ring[i])
    print(f'{int(ring[0]/pembagi)}/{int(ring[i]/pembagi)}')