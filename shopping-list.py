def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = [float(x) for x in input().split()]
    total_price = sum(price * (1 - discount) for price, discount in zip(prices, discounts))
    print("{:.2f}".format(total_price))