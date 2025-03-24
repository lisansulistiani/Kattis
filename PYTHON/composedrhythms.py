def combinations(total):
  # 2x + 3y = total
  for x in range(0, total//2+1):
    for y in range(0, total//3+1):
      if x*2 + y*3 == total:
        return x, y

n = int(input())
x, y = combinations(n)
print(x+y)
print((str(2)+' ')*x,(str(3)+' ')*y, sep='')