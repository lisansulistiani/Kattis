from collections import Counter
words = input().split()
a = Counter(words)
print("no" if any(item>1 for item in a.values()) else "yes")