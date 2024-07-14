def shopping_list():
    num_items = float(input())
    prices = np.array([float(x) for x in input().split()])
    discounts = np.array([float(x) for x in input().split()])

    discounted_prices = prices - (prices * discounts / 100)
    total_price = np.sum(discounted_prices)

    return "{:.1f}".format(total_price)


print(shopping_list())