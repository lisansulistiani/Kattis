from collections import Counter
cell = int(input())
row = int(input())
total = 0
for i in range(row):
  s = Counter(input())['.']
  total+=s
print(total/(row*cell))