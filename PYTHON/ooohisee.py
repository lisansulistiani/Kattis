r, c = map(int, input().split())
maps = list()
for i in range(r):
  maps.append(list(input()))

treasure = 0
loc = list()
for i in range(1,r-1):
  for k in range(1, c-1):
    if maps[i][k]=='0':
      if maps[i-1][k] == maps[i+1][k] == maps[i][k+1] == maps[i][k-1]\
         == maps[i-1][k-1] == maps[i+1][k+1] == maps[i-1][k+1] == maps[i+1][k-1] == 'O':
         treasure+=1
         loc = f'{i+1} {k+1}'
print(f'{loc if treasure==1 else "oh no!" if treasure==0 else "oh no! "+str(treasure)+" locations"}')
