t = input()
if(":)" in t and ":(" in t):
    print("double agent")
elif(":)" in t):
    print("alive")
elif(":(" in t):
    print("undead")
else:
    print("machine")