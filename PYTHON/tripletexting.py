text = input()
panjang_kata = int(len(text)/3)
occ = 0
curr = 0
last = panjang_kata
while(text.count(text[curr:last])<=1):
    curr = panjang_kata
    last = last+panjang_kata
print(text[curr:last])