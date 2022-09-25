tc = int(input())
while(tc!=0):
    pesanan = {}
    for i in range(tc):
        menu = input().split()
        for item in menu[1:]:
            if(item in pesanan):
                pesanan[item].append(menu[0])
            else:
                pesanan[item] = []
                pesanan[item].append(menu[0])
    pesanan = dict(sorted(pesanan.items()))
    for item in pesanan:
        pesanan[item].sort()
        print(f'{item} {" ".join(pesanan[item])}')
    print()
    tc = int(input())