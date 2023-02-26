m, n = list(map(int,input().split()))
for i in range(m):
    c = list(map(int,input().split()))
# Øyvind hates 3-SAT instances with less than eight 
# clauses – as these are always satisfiable
# Whenever Øyvind encounters an instance with eight 
# or more clauses he knows that it is a real 
# challenge to figure out whether this instance is 
# satisfiable or not – 
# and therefore he will judge these problem 
# instances to be satisfactory. 

print("unsatisfactory" if m<8 else "satisfactory")
