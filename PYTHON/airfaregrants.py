N = int(input())
P = int(input())
cheapest = P
expensive = P
for i in range(N-1):
    P = int(input())
    if P>expensive: expensive = P
    if P<cheapest: cheapest = P
reimburse = expensive//2
cost = cheapest-reimburse
print(cost if cost>=0 else 0)