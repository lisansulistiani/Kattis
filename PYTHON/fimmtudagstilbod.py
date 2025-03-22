y = int(input())
price = 1000
if y<=2020:
    print(price)
else:
    price += (y-2020)*100
    print(price)