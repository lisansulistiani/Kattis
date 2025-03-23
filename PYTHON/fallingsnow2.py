N, M = map(int, input().split())
snow = [None]*N
for i in range(N):
  snow[i]=list(input())
for k in range(M):
  for i in range(N-1):
    if snow[i][k] == 'S':
      temp_i = i
      while(temp_i+1<N):
        if snow[temp_i+1][k] == '.':
          temp = snow[i][k]
          snow[i][k]='.'
          snow[temp_i+1][k] = temp
          break
        else:
          temp_i+=1
for i in range(N):
  for k in range(M):
    print(snow[i][k], end="")
  print()