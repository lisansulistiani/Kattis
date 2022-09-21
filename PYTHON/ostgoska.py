sentence = input()
ae = len([w for w in sentence.split() if 'ae' in w])
print("dae ae ju traeligt va" if ae*10/len(sentence.split())>=4 else "haer talar vi rikssvenska")