s = input()
t = input()
res = set()
for x, y in zip(s.split(), t.split()):
  temp_s = set(list(x))
  for item in temp_s:
    if x.count(item) != y.count(item):
      res.add(item)
if s.count(' ')!=t.count(' '):
  res.add(' ')
print(''.join(res))

