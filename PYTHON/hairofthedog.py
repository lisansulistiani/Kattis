N = int(input())
curr = "sober"
hungover = 0
for i in range(N):
  conditions = input()
  if conditions=="sober" and curr == "drunk":
    hungover+=1
  
  curr = conditions
print(hungover)