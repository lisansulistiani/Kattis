from math import sqrt
position = list(map(int,input().split()))
koordinat = [position[i:i+2] for i in range(0,len(position),2)]
start = sqrt(pow(koordinat[0][0]-koordinat[1][0],2)+pow(koordinat[0][1]-koordinat[1][1],2))
end = sqrt(pow(koordinat[3][0]-koordinat[2][0],2)+pow(koordinat[3][1]-koordinat[2][1],2))
print(max(start,end))