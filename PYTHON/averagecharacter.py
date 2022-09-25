words = list(input())
total = 0
for item in words:
    total+=ord(item)
print(chr(int(total/len(words))))