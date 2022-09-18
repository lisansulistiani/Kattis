sp = {}
sp['a']='2'
sp['b']='22'
sp['c']='222'

sp['d']='3'
sp['e']='33'
sp['f']='333'

sp['g']='4'
sp['h']='44'
sp['i']='444'

sp['j']='5'
sp['k']='55'
sp['l']='555'

sp['m']='6'
sp['n']='66'
sp['o']='666'

sp['p']='7'
sp['q']='77'
sp['r']='777'
sp['s']='7777'

sp['t']='8'
sp['u']='88'
sp['v']='888'

sp['w']='9'
sp['x']='99'
sp['y']='999'
sp['z']='9999'

sp[' ']='0'

case = int(input())
for i in range(1,case+1):
    inp = input()
    ans = ""
    text = []
    for k in inp:
        if(len(text)!=0 and set(sp[k]) == set(text[-1])):
            text.append(" ")
            text.append(sp[k])
        else:
            text.append(sp[k])
    print('Case #{0}: {1}'.format(i,"".join(text)))
