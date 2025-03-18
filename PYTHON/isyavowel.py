sentence = input()
vowel = ['a','i','u','e','o']
total_vowel = 0
total_vowel_y = 0
for i in range(len(vowel)):
    total_vowel+=sentence.count(vowel[i])
total_vowel_y = total_vowel+sentence.count('y')
print(total_vowel,total_vowel_y)