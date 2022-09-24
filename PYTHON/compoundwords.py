word = list()
while True:
    try:
        inp = input().split()
        word.extend(inp)
    except EOFError:
        word.sort()
        new_word = list()
        for i in range(0,len(word)):
            for k in range(0, len(word)):
                if(i!=k):
                    if(word[i]+word[k] not in new_word): new_word.append(word[i]+word[k])
        new_word.sort()
        print("\n".join(new_word))
        break