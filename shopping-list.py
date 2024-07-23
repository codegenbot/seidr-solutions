def shopping_list():
    n = int(input())
    prices = np.array([float(i) for i in input().split()])
    discounts = np.array([float(i) for i in input().split()])
    total_price = 0
    for price, discount in zip(prices, discounts):
        discounted_price = price - (price * discount / 100)
        total_price += discounted_price
    print(total_price)