N = int(input())
items = ["keys","phone","wallet"]
bool_items = [0,0,0]
for i in range(N):
    item = input()
    if item in items:
        bool_items[items.index(item)] = 1
if 0 not in bool_items:
  print("ready")
else:
  for i in range(len(bool_items)):
      if bool_items[i]==0: print(items[i])