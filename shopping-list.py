def shopping_list():
    items, line = input().split(), input().split()
    prices = list(map(float, [float(x) for x in items]))
    discounts = list(map(float, [int(x) for x in line[0].split(',')]))
    total_price = sum(price * (1 - float(discount) / 100.0) for price, discount in zip(prices, discounts))
    print("%.2f" % total_price)