N = int(input()) # number of contestants
M = int(input()) # number of teams
problems = dict(map(lambda x: (x, 0),input().split())) # name of problems

for i in range(M):
  score = map(int,input().split())
  problems = dict(zip(problems.keys(), map(lambda x, y: x+y, problems.values(),score)))

print(max(problems, key=problems.get))