n = int(input())
prices_discounts = []
for _ in range(n):
    price, discount = map(float, input().split())
    prices_discounts.append((price, discount))

total_price = sum(price * (1 - discount / 100.0) for price, discount in prices_discounts)
print(format(total_price, ".2f"))