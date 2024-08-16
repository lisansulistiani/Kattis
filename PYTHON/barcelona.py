bags, benny = input().split()
bag_seqs = input().split()
pos = bag_seqs.index(benny)
print("fyrst" if pos==0 else "naestfyrst" if pos==1 else f"{pos+1} fyrst")