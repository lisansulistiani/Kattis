initial_word = input()
last_word = input()

maximum_word = max(len(initial_word), len(last_word))
bool_sim = [1]*maximum_word
pattern = initial_word if len(initial_word)==maximum_word else last_word
text = initial_word if len(initial_word)!=maximum_word else last_word


for i in range(len(text)):
  if text[i]==pattern[i]:
    bool_sim[i] = 0

print(sum(bool_sim)+1)
