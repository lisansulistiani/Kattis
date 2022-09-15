word = input()
words_permutation = list(input())
wrong = 0
guessed = ['']*len(word)
for i in range(0,len(words_permutation)):
    if(words_permutation[i] in word):
        for k in range (0,len(word),1):
            if(word[k]==words_permutation[i]):
                guessed[k]=words_permutation[i]
        if("".join(guessed)==word):
            print("WIN")
            break
    else:
        wrong+=1
        if(wrong==10):
            print("LOSE")
            break
