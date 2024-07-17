def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    discounted_prices = [(price - (price * discount / 100)) for price, discount in zip(prices, discounts)]
    total_price = sum(discounted_prices)
    print("{:.1f}".format(total_price))