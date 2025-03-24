N, Q = map(int, input().split())
name_dict = dict()
for i in range(N):
  name = input().split()
  initial = name[0][0]+name[1][0]
  if initial not in name_dict:
    name_dict[initial] = list()
    name_dict[initial].append(" ".join(name))
  else:
    if any(x!=" ".join(name) for x in name_dict[initial]):
      name_dict[initial].append(" ".join(name))

for i in range(Q):
  init = input()
  if init in name_dict:
    if len(name_dict[init])>1:
      print("ambiguous")
    else:
      print(" ".join(name_dict[init]))
  elif init not in name_dict:
    print("nobody")
