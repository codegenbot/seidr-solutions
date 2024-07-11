def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discount = [float(x) for x in input().split()]
    total_price = sum(
        price - (price * discount[i] / 100) for i, price in enumerate(prices)
    )
    return format(total_price, ".1f")