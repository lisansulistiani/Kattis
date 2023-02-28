n = int(input())
prices = list(map(int,input().split()))
total = sum(prices)
print("no" if total%3!=0 else "yes")