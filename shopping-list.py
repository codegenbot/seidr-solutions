def shopping_list():
    n = int(input())
    prices = [float(i) for i in input().split()]
    discounts = [float(i) for i in input().split()]
    total_price = sum(p - (p * d / 100) for p, d in zip(prices, discounts))
    return round(total_price, 1)