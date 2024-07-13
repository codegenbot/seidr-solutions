n = int(input())
total_price = 0
for _ in range(n):
    prices_discounts = [float(x) for x in input().split()]
    total_price += sum([price * (1 - discount / 100.0) for price, discount in zip(prices_discounts[::2], prices_discounts[1::2])])
print(format(total_price, ".2f"))