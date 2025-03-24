a, b = map(int,input().split())
total_alcohol_a = 0
total_alcohol_b = 0
for i in range(a):
    v, c = map(int, input().split())
    total_alcohol_a += v * (c / 100)
for i in range(b):
    v, c = map(int, input().split())
    total_alcohol_b += v * (c / 100)

if abs(total_alcohol_b-total_alcohol_a) < 1e-6:
    print("same")
else: print("different")