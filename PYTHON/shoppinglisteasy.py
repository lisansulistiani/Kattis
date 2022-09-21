n_m = input()
n = int(n_m.split()[0])
m = int(n_m.split()[1])
items = []
for i in range(0,n):
    inp = input()
    if(i==0):
        items = [x for x in inp.split()]
    else:
        for i in range(0,len(items)):
            if(items[i] not in inp):    
                items[i] = ""
            
items = list(filter(None, items))
items = sorted(items)
print(len(items),*items,sep="\n")
