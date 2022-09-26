from statistics import mean
while True:
    try:
        inp = input().split()
        heart_rate = []
        name = []
        for i in range(0,len(inp)):
            try:
                number = float(inp[i])
                heart_rate.append(number)
            except:
                name.append(inp[i])
        print(f'{mean(heart_rate)} {" ".join(name)}')
    except EOFError:
        break