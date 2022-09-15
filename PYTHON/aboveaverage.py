import statistics
c = int(input())
for i in range(0,c):
    inp = input()
    grade = [int(x) for x in inp.split()]
    #mean = sum(grade[x] for x in range(1,grade[0]+1))/grade[0]
    mean = statistics.mean(grade[1:])
    aa = 0
    for x in range(1,grade[0]+1):
        if(grade[x]>mean):
          aa+=1
    hasil = aa*100/grade[0]
    print('{0:.3f}%'.format(hasil))
