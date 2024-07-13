```
n = int(input())
item_prices = list(map(float, input().split()))
item_discounts = list(map(float, input().split()))

total_price = 0
for i in range(n):
    price = item_prices[i] * (1 - item_discounts[i] / 100)
    total_price += price

return round(total_price, 1)