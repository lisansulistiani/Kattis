s = int(input())
hours = s//3600
minutes = (s%3600)//60
second = (s%3600)%60
print(f'{hours} : {minutes} : {second}')