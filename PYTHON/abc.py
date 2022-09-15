number = list(map(int,input().split()))
word_order = list(input())
number.sort()
for item in word_order:
    print(number[ord(item)%65],end=" ")