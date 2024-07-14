def shopping_list():
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    quantities = list(map(int, input().split()))
    
    total_price = round(sum((p - (p * d / 100)) * q for p, q, d in zip(prices, quantities, discounts)), 2)
    
    return total_price

print(shopping_list())