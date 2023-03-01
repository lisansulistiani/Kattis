notes = {0:   "C", \
         1:   "C#", \
         2:   "D", \
         3:   "D#", \
         4:   "E", \
         5:   "F", \
         6:   "F#", \
         7:   "G", \
         8:   "G#", \
         9:   "A", \
         10:  "A#", \
         11:  "B", \
         12:  "C"}
pola = [2,2,1,2,2,2,1]
key_notes = dict()
for idx, key in enumerate(notes):
    curr = key
    key = notes[curr]
    key_notes[key] = list()
    key_notes[key].append(notes[curr])
    for i in pola:
        key_notes[key].append(notes[(curr+i)%12])
        curr = curr+i

# for idx,key in enumerate(key_notes):
    # print(f'Kunci {key}: {" ".join(key_notes[key])}')

n = int(input())
note = set(input().split())
ans = []
for idx,key in enumerate(key_notes):
    stop = False
    for item in note:
        if(item not in key_notes[key]):
            stop = True
            break
    if not stop:
        ans.append(key)
if(len(ans)>0):
    print(" ".join(sorted(ans)))
else:
    print("none")