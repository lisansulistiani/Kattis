n = int(input())
words = input().split()
for word in words:
  if word[0].istitle():
    print(word[0],end="")