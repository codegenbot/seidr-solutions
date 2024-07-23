def shopping_list():
    input_str = input()
    prices = list(map(float, input_str.split()[:-1]))
    discounts = list(map(float, input_str.split()[1:]))
    total_price = sum(price * (1 - float(discount) / 100.0) for price, discount in zip(prices, discounts))
    print("%.2f" % total_price)