v, a, t = map(int,input().split())
# d = vt + 1/2 at^2
d = (v*t) + (.5*(a*float(t**2)))
print(d)