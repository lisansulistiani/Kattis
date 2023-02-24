a, b = map(int,input().split())
n = input()
m = input()
n = list('a'*(b-a)+n)
for i in range(b-1,a-1,-1):
    n[i-a]=chr((ord(m[i])-ord(n[i])+26)%26+97)
print(''.join(n))
