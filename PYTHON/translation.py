N = int(input())
swe = input().split()
eng_dict = dict()
M = int(input())
for i in range(M):
    eng = input().split()
    eng_dict[eng[0]] = eng[1]
for item in swe:
    print(eng_dict[item], end=" ")