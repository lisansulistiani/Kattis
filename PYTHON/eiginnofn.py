queries = list()
lookup = {}

for i in range(int(input())):
  temp = input().split()
  if len(temp) == 1:
    lookup[temp[0]]="Jebb"
  else:
    lookup[temp[0]]=f"Neibb en {temp[0]} {temp[1]} er heima"

for i in range(int(input())):
  item = input()
  if item in lookup:
    print(lookup[item])
  else:
    print("Neibb")
