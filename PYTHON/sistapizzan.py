N=int(input())
res = any([(N-int(input()))%2 for _ in range(N)])
print("Ja" if res else "Nej")
