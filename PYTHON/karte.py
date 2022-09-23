card = input()
deck = list()
awal = 0
akhir = 3
while(awal<len(card)):
    deck.append(card[awal:akhir])
    awal = akhir
    akhir +=3

if(any(card.count(item)>1 for item in deck)):
    print("GRESKA")
else:
    print(f'{13-card.count("P")} {13-card.count("K")} {13-card.count("H")} {13-card.count("T")}')