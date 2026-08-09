s = list(input())
x = len(s)-1
isPalindrome=True
for i in range(0, int(len(s)/2),1):
    if(s[i]!=s[x]):
        print("Nothing special about this string :(")
        isPalindrome = False
        break
    else:
        x -= 1
if isPalindrome:
    print("Palindrome!")