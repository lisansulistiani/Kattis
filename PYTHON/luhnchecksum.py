n = int(input())
for i in range(n):
    ak = input()
    hls = 0
    data =  list(reversed(ak))
    for j in range(len(data)):
        if j %2==0 :
            hls += int(data[j])
        else :
            ak1 = int(data[j])
            if ak1<5 :
                hls+=ak1*2
            elif ak1==5:
                hls += 1
            elif ak1==6 :
                hls+=3
            elif ak1 == 7 :
                hls+=5
            elif ak1 == 8 :
                hls+=7
            else :
                hls+=9
    if hls%10 == 0 :
        print("PASS")
    else :
        print("FAIL")