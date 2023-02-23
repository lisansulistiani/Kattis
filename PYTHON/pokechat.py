from textwrap import wrap
S = input()
S = [*S]
ids = input()
ids = wrap(ids,3)
for item in ids:
    print(S[int(item)-1],end="")