def check_vertical_horizontal(n):
  for i in range(3):
    # VERTICAL
    if n[0][i] == n[1][i] and n[1][i] == n[2][i] and n[0][i]=='O':
      return True
    # HORIZONTAL
    if n[i][0] == n[i][1] and n[i][1] == n[i][2] and n[i][0] == 'O':
      return True
  return False

def check_diagonal(n):
  if n[0][0] == n[1][1] and n[1][1]==n[2][2] and n[0][0]=='O':
    return True
  if n[0][2] == n[1][1] and n[1][1]==n[2][0] and n[0][2]=='O':
    return True

def check(n):
  if check_vertical_horizontal(n):
    return "Jebb"
  if check_diagonal(n):
    return "Jebb"
  return "Neibb"

n = list()
for i in range(3):
  n.append(list(input()))

print(check(n))