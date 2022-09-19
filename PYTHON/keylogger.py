alphabet = dict()
alphabet["clank"]='a'
alphabet["bong"]='b'
alphabet["click"]='c'
alphabet["tap"]='d'
alphabet["poing"]='e'
alphabet["clonk"]='f'
alphabet["clack"]='g'
alphabet["ping"]='h'
alphabet["tip"]='i'
alphabet["cloing"]='j'
alphabet["tic"]='k'
alphabet["cling"]='l'
alphabet["bing"]='m'
alphabet["pong"]='n'
alphabet["clang"]='o'
alphabet["pang"]='p'
alphabet["clong"]='q'
alphabet["tac"]='r'
alphabet["boing"]='s'
alphabet["boink"]='t'
alphabet["cloink"]='u'
alphabet["rattle"]='v'
alphabet["clock"]='w'
alphabet["toc"]='x'
alphabet["clink"]='y'
alphabet["tuc"]='z'
alphabet["whack"]=' '
special = ["bump","pop","dink","thumb"]
n = int(input())
out=""
islower=True
isDink = False
isThumb = False
for i in range(0,n):
    inp = input()
    if(inp=="bump" or inp=="dink" or inp=="thumb"):
        if(islower):
            islower=False
        else:
            islower=True
    
    if(inp not in special and islower):
        out+=alphabet[inp].lower()
    elif(inp not in special and not islower):
        out+=alphabet[inp].upper()
    elif(inp=="pop"):
        out = out[0:-1]
        
print(out)
