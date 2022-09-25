tc = int(input())
mumble = input().split()
valid = True
for i in range(len(mumble)):
    if(str(i+1)!=mumble[i] and mumble[i]!="mumble"):
        print("something is fishy")
        valid=False
        break
if valid:print("makes sense")