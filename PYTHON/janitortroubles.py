import math
inp = input()
sisi = [int(s) for s in inp.split()]

s = sum(sisi)/2
theta1 = math.acos(sisi[0]/sisi[3])
theta2 = math.acos(sisi[2]/sisi[1])
theta = theta1+theta2

area = ((s-sisi[0])*(s-sisi[1])*(s-sisi[2])*(s-sisi[3]))**0.5

print(area)
