```
n = int(input())
prices_discounts = list(map(lambda x: [float(y) for y in x.split()], [input() for _ in range(n)]))
total_price = sum(price * (1 - discount / 100.0) for price, discount in prices_discounts)
print(format(total_price, ".2f"))