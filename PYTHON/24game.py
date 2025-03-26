import itertools

def calc(target, operator, queries):
  temp = list()
  for i in range(len(operator[0])):
    temp.append(str(queries[i]))
    temp.append(operator[0][i])
  temp.append(str(queries[-1]))
  out = ' '.join(temp)
  res = eval(out)
  if res == target:
    return f'{out.replace("//","/")} = {res}'
  else:
    if len(operator)>1:
      return calc(target, operator[1:], queries)
    else:
      return "no solution"

C, T = map(int, input().split())
numbers = list(map(int, input().split()))
operators = ['+', '-', '*', '//']
combinations = list(itertools.product(operators, repeat=C-1))
print(calc(T, combinations, numbers))
