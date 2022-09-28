records = list(input())
score = [records[i:i+2] for i in range(0,len(records),2)]
score_a = 0
score_b = 0
for item in score:
    if(item[0]=='A'):
        score_a += int(item[1])
    else: score_b += int(item[1])
    
print("A" if score_a>score_b else "B" )
