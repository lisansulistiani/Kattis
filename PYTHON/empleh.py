white = "".join(input().split("White: ")).split(',')
black = "".join(input().split("Black: ")).split(',')

chessboard = [":::"]*8
for i in range(0,len(chessboard)):
    chessboard[i] = [":::"]*8
for i in range(0,8):
    for k in range(0,8):
        if(i%2==0 and k%2==0) or (i%2!=0 and k%2!=0): chessboard[i][k]='...'
    
column = {'a':0,'b':1,'c':2,'d':3,'e':4,'f':5,'g':6,'h':7}
row = [8,7,6,5,4,3,2,1]

for item_white in white:
    if(item_white):
        isi_white = item_white[0] if len(item_white)>2 else "P"
        temp = list(chessboard[row.index(int(item_white[-1]))][column[item_white[-2]]])
        temp[1]=isi_white
        temp = "".join(temp)
        chessboard[row.index(int(item_white[-1]))][column[item_white[-2]]] = temp
    
for item_black in black:
    if(item_black):
        isi_black = item_black[0].lower() if len(item_black)>2 else "p"
        temp_black = list(chessboard[row.index(int(item_black[-1]))][column[item_black[-2]]])
        temp_black[1] = isi_black
        temp_black = "".join(temp_black)
        chessboard[row.index(int(item_black[-1]))][column[item_black[-2]]] = temp_black

for i in range(0,8):
    print("+---"*8+'+')
    print('|',end="")
    for k in range(0,8):
        print(chessboard[i][k],end="|")
    print()
print("+---"*8+'+')