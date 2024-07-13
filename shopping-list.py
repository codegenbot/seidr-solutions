def shopping_list():
    n = int(input())
    total_price = 0
    for _ in range(n):
        prices, discounts = map(float, input().split()), map(float, input().split())
        total_price += sum(
            price * (1 - discount / 100) for price, discount in zip(prices, discounts)
        )
    return round(total_price, 2)