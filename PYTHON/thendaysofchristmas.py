def get_present(res, total=0):
  if len(res)>0:
    for i in range(len(res)):
      total += sum(res)
      return get_present(res[:-1], total)
  else:
    return total  
  
d = int(input())
res = [i for i in range(1,d+1)]
print(sum(res))
print(get_present(res))