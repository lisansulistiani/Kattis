adrian = ['A','B','C']
bruno = ['B','A','B','C']
goran = ['C','C','A','A','B','B']
quest = int(input())
answer = list(input())
adrian_seq, bruno_seq, goran_seq = [], [], []
idx_a, idx_b, idx_g = 0, 0, 0
for i in range(quest):
    adrian_seq.append(adrian[idx_a])
    bruno_seq.append(bruno[idx_b])
    goran_seq.append(goran[idx_g])
    idx_a += 1
    idx_b += 1
    idx_g += 1
    if(idx_a>=len(adrian)):
        idx_a = 0
    if(idx_b>=len(bruno)):
        idx_b = 0
    if(idx_g>=len(goran)):
        idx_g = 0
correct_a, correct_b, correct_g = 0, 0, 0
for a, b, g, item in zip(adrian_seq, bruno_seq, goran_seq, answer):
    if(a==item): correct_a+=1
    if(b==item): correct_b+=1
    if(g==item): correct_g+=1

maximals = max(max(correct_a,correct_b), correct_g)
print(maximals)
if(correct_a==maximals): print("Adrian")
if(correct_b==maximals): print("Bruno")
if(correct_g==maximals): print("Goran")