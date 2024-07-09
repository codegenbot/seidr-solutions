def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(lambda x: float(x) / 100, input().replace('\n', ' ').split()))
    total_price = sum(price * (1 - discount) for price, discount in zip(prices, discounts))
    return "{:.2f}".format(total_price)