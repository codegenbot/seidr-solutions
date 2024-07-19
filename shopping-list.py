def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = 0.0
    for price, discount in zip(prices, discounts):
        discounted_price = (1 - discount / 100) * price
        total_price += discounted_price

    print(total_price)