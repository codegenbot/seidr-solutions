def shopping_list():
    n = int(input())
    inputs = [input().split() for _ in range(n)]

    prices = list(map(float, [i[0] for i in inputs]))
    discounts = list(map(int, [i[1] for i in inputs]))

    total_price = sum(
        price * (1 - discount / 100) for price, discount in zip(prices, discounts)
    )

    return round(total_price, 1)


print(shopping_list())