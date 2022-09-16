n = int(input())
total = 1
h=1
for i in range(3,n,2):
    total += (i*i)
    if(total<=n):
        h+=1
    else:
        break
print(h)

    
