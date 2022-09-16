check = False
for i in range(0,5):
    word = input()
    if("FBI" in word):
        print(i+1,end=' ')
        check = True
if not check:
    print("HE GOT AWAY!")
