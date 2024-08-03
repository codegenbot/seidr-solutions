def shopping_list():
    n = int(input())
    prices = [float(i) for i in input().split()]
    discounts = [float(i) for i in input().split()]

    total_price = sum(p * (1 - d / 100) for p, d in zip(prices, discounts))

    return total_price