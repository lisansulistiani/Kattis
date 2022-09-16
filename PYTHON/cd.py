#TLE on cases_2

n, m = input().split()
while(int(n)!=0 and int(m)!=0):
    jack = set()
    jill = set()
    for i in range(int(n)):
        jack.add(input())
    for i in range(int(m)):
        jill.add(input())

    print(len(jack & jill))
    n, m = input().split()
