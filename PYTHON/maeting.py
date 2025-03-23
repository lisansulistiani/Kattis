n, m = map(int, input().split())
monday = input().split()
tuesday = input().split()
# print(" ".join(list(set(monday)&set(tuesday))))

for item in monday:
  if item in tuesday:
    print(item, end=" ")