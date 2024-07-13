def shopping_list():
    n = int(input())
    prices1 = list(map(float, input().split()))
    discounts1 = list(map(float, input().split()))

    total_price = sum(
        price - (price * discount / 100) for price, discount in zip(prices1, discounts1)
    )

    prices2 = list(map(float, input().split()))
    discounts2 = list(map(float, input().split()))

    total_price += sum(
        price - (price * discount / 100) for price, discount in zip(prices2, discounts2)
    )

    return round(total_price, 2)