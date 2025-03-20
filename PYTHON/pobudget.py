N = int(input()) # number of revenues/expenses
sum_K = 0
for i in range(N):
    desc = input()
    sum_K += int(input())
print("Usch, vinst" if sum_K>0 else "Lagom" if sum_K==0 else "Nekad")