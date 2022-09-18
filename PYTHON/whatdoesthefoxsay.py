c = int(input())
for i in range(c):
    inp = input()
    encode = list(inp.split())
    animal_sound = input()
    while animal_sound!="what does the fox say?":
        animal = animal_sound.split(" goes ")[0]
        sound = animal_sound.split(" goes ")[1]
        try:
            encode = list(filter((sound).__ne__, encode))
        except Exception as e:
            pass
        animal_sound = input()
    print(*encode)
