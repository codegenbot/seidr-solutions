def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split())) 
    total_price = sum((1 - d) * p for p, d in zip(prices, discounts))
    return format(total_price, ".1f")