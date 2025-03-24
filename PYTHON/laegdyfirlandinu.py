def check(forecast):
  for i in range(1,n-1,1):
    for k in range(1,m-1,1):
      if forecast[i][k] < forecast[i-1][k] and forecast[i][k] < forecast[i+1][k] and \
        forecast[i][k] < forecast[i][k-1] and forecast[i][k] < forecast[i][k+1]:
        return "Jebb"
  return "Neibb"

n, m = map(int, input().split())
forecast = list()
for i in range(n):
  forecast.append(list(map(int, input().split())))
print(check(forecast))