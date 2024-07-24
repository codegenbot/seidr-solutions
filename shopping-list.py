def shopping_list():
    _ = int(input())
    prices, discounts = [float(x) for x in input().split()], [float(x) for x in input().split()]
    total_price = sum(price - (price * discount / 100) for price, discount in zip(prices, discounts))
    return format(total_price, ".2f")