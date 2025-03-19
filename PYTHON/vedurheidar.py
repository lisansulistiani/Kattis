v = int(input()) # current wind speed
n = int(input()) # number of roads
name, k = [None]*n, [None]*n
for i in range(n):
    name[i], k[i] = input().split() # name, maximum safe wind speed
for i in range(len(name)):
    print(f'{name[i]} lokud' if int(k[i])<v else f'{name[i]} opin')