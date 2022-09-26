tc = int(input())
saldo = 0
initial = 0
transaction = []
for i in range(tc):
    transaction.append(int(input()))
for item in transaction:
    saldo+=item
    initial = max(-saldo, initial)
print(initial)