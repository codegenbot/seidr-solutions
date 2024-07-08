def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    return round(sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts)), 2)