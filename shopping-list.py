```
n = int(input())
prices_str, discounts_str = input().split(), input().split()

prices = list(map(float, prices_str))
discounts = list(map(float, discounts_str))

total_price = sum(
    price * (1 - discount / 100) for price, discount in zip(prices, discounts)
)

print(round(total_price, 1))