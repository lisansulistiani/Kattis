string = input()
if(":)" or ":-)" or ";)" or ";-)" in string):
    indices = [i for i, x in enumerate(string) if x == ":" or x==";"]
    for i in indices:
        if(string[i:i+2]==":)" or string[i:i+2]==";)"):
            print(i)
        elif(string[i:i+3]==":-)" or string[i:i+3]==";-)"):
            print(i)
