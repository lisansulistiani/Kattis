statues = int(input())

day = 0
printer = 1
statued_print = 0
while(statued_print<statues):
    if((statues-statued_print)>printer):
        printer+=printer
        day+=1
    else:
        day+=1
        statued_print+=printer
print(day)