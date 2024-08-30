def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = sum(p - (p * (d / 100.0)) for p, d in zip(prices, discounts))

    return total_price