n = int(input())
occ = 0
for i in range(n):
    inp = input()
    if("rose" in inp.lower() or "pink" in inp.lower()):
        occ+=1
if(occ==0):
    print("I must watch Star Wars with my daughter")
else:
    print(occ)
