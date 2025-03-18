n = int(input()) #guests
#guests=[None]*n
fun = -1
who = ""
for i in range(n):
    #guests[i] = input()
    guest = input().split()
    if int(guest[1])>fun:
        fun = int(guest[1])
        who = guest[0]
        
print(who)