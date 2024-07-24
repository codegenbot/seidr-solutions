def shopping_list():
    n = int(input())
    prices = [float(i) for i in input().split()]
    discounts = [float(i) for i in input().split()]
    total_price = sum(
        price - (price * discount / 100) for price, discount in zip(prices, discounts)
    )
    return "{:.1f}".format(total_price)


print(shopping_list())