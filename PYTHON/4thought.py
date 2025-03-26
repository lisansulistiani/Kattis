import itertools

def calc(target, operator, res=4):
  out = f'4 {operator[0][0]} 4 {operator[0][1]} 4 {operator[0][2]} 4'
  res = eval(out)
  if res == target:
    return f'{out.replace("//","/")} = {res}'
  else:
    if len(operator)>1:
      return calc(target, operator[1:])
    else:
      return "no solution"
    
operators = ['+', '-', '*', '//']
combinations = list(itertools.product(operators, repeat=3))

m = int(input())
for i in range(m):
  n = int(input())
  print(calc(n, combinations))