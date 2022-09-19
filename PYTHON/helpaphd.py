tc = int(input())
for i in range(tc):
    probs = input()
    if("+" in probs):
        a, b = probs.split("+")
        print(int(a)+int(b))
    elif("P=NP" in probs):
        print("skipped")