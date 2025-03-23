from collections import Counter
n = int(input())
popular = Counter()
for i in range(n):
    frosh = tuple(sorted(map(int, input().split())))
    popular[frosh] += 1
max_popularity = max(popular.values())
most_popular_count = sum(1 for count in popular.values() if count == max_popularity)
print(max_popularity * most_popular_count)

