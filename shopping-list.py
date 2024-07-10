n = int(input())
price = list(map(float, input().split()))
discount = list(map(float, input().split()))

total_price = sum(p * (1 - d / 100) for p, d in zip(price, discount))

print("%.1f" % total_price)