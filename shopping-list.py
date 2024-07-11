def shopping_list():
    n = int(input())
    prices = [float(i) for i in input().split()]
    discounts = [float(i) for i in input().split()]

    total_price = sum(
        price * (1 - discount / 100) for price, discount in zip(prices, discounts)
    )

    return round(total_price, 2)