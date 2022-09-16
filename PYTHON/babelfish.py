animal = dict()
while True:
    try :
        complete_input = input()
        if(len(complete_input.split())>0):
            if(len(complete_input.split())==2):
                animal[complete_input.split()[1]]=complete_input.split()[0]
            else:
                try:
                    print(animal[complete_input])
                except Exception as e:
                    print("eh") 
    except EOFError:
        break;
