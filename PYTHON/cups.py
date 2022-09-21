n = int(input())
cups = {}
for i in range(n):
    inp = input()
    if(inp.split()[0].isnumeric()):
        r = float(inp.split()[0])/2
        cups[r]=inp.split()[1]
    else:
        r = float(inp.split()[1])
        cups[r]=inp.split()[0]
        
dictionary_items = cups.items()

sorted_items = sorted(dictionary_items)
cups = dict((y, x) for x, y in sorted_items)
print(*cups.keys(),sep="\n")
        
