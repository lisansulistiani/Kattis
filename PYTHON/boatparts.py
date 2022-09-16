p_n = input()
p = int(p_n.split()[0])
n = int(p_n.split()[1])
part = []
check = False
idx=0
for i in range(1,n+1):
    sp = input()
    if(sp not in part):
        part.append(sp)
    if(check == False and len(part)==p):
        idx=i
        check=True
if(check):
    print(idx)
else:
    print("paradox avoided")
