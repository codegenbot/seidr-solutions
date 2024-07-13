def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]
    total_price = sum(
        price * (1 - discount / 100) for price, discount in zip(prices, discounts)
    )
    return format(total_price, ".1f")