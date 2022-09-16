word = list(input())
answer = list()
for item in word:
    if(item=="<"):
        answer.pop()
    else:
        answer.append(item)
print("".join(answer))