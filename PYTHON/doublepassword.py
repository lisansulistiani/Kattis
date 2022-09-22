one = input()
two = input()
diff = 0
for digit1, digit2 in zip(one, two):
    if(digit1!=digit2): diff+=1
print(pow(2,diff))