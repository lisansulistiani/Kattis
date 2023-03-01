# FORMULA:
# x + 0     = x         x . 0       = 0
# x + S(y)  = S(x+y)    x . S(y)    = x . y + x

x = input()
y = input()
total = x.count("S")*y.count("S")
print("S("*total+"0"+")"*total)