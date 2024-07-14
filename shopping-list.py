```
def shopping_list():
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    quantities = list(map(int, input().split()))
    discounted_total_price = sum((p * (1 - d / 100)) for p, d in zip(prices, discounts))
    total_cost = sum(p * q for p, q in zip(prices, quantities))
    return round(total_cost - discounted_total_price, 2)


print(shopping_list())