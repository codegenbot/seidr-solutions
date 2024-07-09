def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total = sum(price - (price * max(0.01, discount / 100.0) if discount > 0 else 0) for price, discount in zip(prices, discounts))
    return "{:.2f}".format(total).replace(".", "")