def shopping_list():
    n = int(input())
    prices_and_discounts = [list(map(float, input().split())) for _ in range(n)]
    prices, discounts = zip(*prices_and_discounts)
    total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
    return format(total_price, ".2f")