xh, yh = map(int, input().split()) #petra's rook
xp, yp = map(int, input().split()) # gardar's pawn
if xh==xp or yp==yh: print(1)
else: print(2)