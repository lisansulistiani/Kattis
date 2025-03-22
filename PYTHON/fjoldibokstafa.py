n = input()
is_alnum = [1 if x.isalpha() else 0 for x in n]
print(sum(is_alnum))