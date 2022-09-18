import statistics
n_k = input()
n = int(n_k.split()[0])
k = int(n_k.split()[1])
point_min = [-3]*n
point_max = [3]*n
for i in range(0,k):
    point = int(input())
    point_min[i]=point
    point_max[i]=point

minimum = statistics.mean(point_min)
maximum = statistics.mean(point_max)
print(minimum,maximum)
