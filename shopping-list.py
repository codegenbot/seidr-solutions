def shopping_list():
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    quantities = list(map(int, input().split()))
    total_price = sum(p * q * (1 - d/100) for p, q, d in zip(prices, quantities, discounts))
    return round(total_price, 2)

print(shopping_list())