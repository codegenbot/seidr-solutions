```
def shopping_list():
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    quantities = list(map(int, input().split()))
    
    discounted_prices = [(p * (1 - d / 100)) for p, d in zip(prices, discounts)]
    total_cost = sum(p * q for p, q in zip(discounted_prices, quantities))
    
    return round(total_cost, 2)

print(shopping_list())