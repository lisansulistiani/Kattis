N = int(input())
# pref = list()
min_, max_ = -1, 3*10e5
for i in range(N):
    min_degree, max_degree = map(int, input().split())
    min_ = max(min_, min_degree)
    max_ = min(max_, max_degree)
    # pref.append([k for k in range(min_degree, max_degree+1)])

# res = set(pref[0]).intersection(*pref)

# if len(res) == 0:
#   print("bad news")
# else:  
#   e = next(iter(res))
#   print(f'{len(res)} {e}')

if max_<min_:
  print("bad news")
else:
  print(max_-min_+1, min_)
