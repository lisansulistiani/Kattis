from decimal import Decimal
line = input()
a = Decimal(line.split()[0])
b = Decimal(line.split()[1])
c = Decimal(line.split()[2])
ans = a*(b/c)
print(Decimal(ans))

