def shopping_list():
    n = int(input())
    prices = [float(i) for i in input().split()]
    discount = [float(i) for i in input().split()]
    total_price = sum(
        price - (price * discount[i] / 100) for i, price in enumerate(prices)
    )
    return round(total_price, 1)


print(shopping_list())