n = int(input())
before = input()
after = input()
if(n%2==0):
    if(before==after):
        print("Deletion succeeded")
    else:
        print("Deletion failed")
else:
    a = {}
    a['0']='1'
    a['1']='0'
    success=False
    for i in range(0,len(before)):
        if(a[before[i]]!=after[i]):
            print("Deletion failed")
            success=False
            break
        else:
            success=True
    if(success):
        print("Deletion succeeded")
