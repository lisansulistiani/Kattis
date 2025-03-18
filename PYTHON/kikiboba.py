words = input()
b = words.count('b')
k = words.count('k')

if b>k:
    print("boba")
elif k>b:
    print("kiki")
elif b==k and (b!=0 and k!=0):
    print("boki")
else:
    print("none")
