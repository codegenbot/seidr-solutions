def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = sum(price * (1 - float(discount) / 100.0) for price, discount in zip(prices, discounts))
    print("%.2f" % total_price)