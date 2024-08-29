def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = round(
        sum(
            price * (1 - discount / 100) * n
            for price, discount in zip(prices, discounts)
        ),
        1,
    )

    return total_price