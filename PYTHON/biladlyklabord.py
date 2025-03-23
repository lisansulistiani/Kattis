n = input().split()
for item in n:
  for i in range(len(item)-1):
    print(item[i] if item[i]!=item[i+1] else '', end='')
  print(item[-1], end='')
  print(" ", end='')