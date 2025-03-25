idx = 0
cases = dict()
while True:
  try:
    idx +=1
    n = int(input())
    numbers = list()
    for i in range(n):
      numbers.append(int(input()))
    # numbers.sort()

    m = int(input())
    queries = list()
    for i in range(m):
      queries.append(int(input()))
    
    cases[idx] = [numbers, queries]
    
  except EOFError:
    for idx in cases:
      print(f'Case {idx}:')
      numbers = cases[idx][0]
      queries = cases[idx][1]
      # print(numbers, queries)
      sums = list()
 
      for k in range(len(numbers)-1):
        for l in range(k+1, len(numbers)):
          sums.append(numbers[k]+numbers[l])

      for i in queries:
        subs = [x-i for x in sums]
        index_closest_to_zero = min(range(len(subs)), key=lambda i: abs(subs[i]))
        
        print(f'Closest sum to {i} is {sums[index_closest_to_zero]}.')
    break