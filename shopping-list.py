def shopping_list():
    line = input().splitlines()
    prices = list(map(float, line[0].split()))
    discounts = [int(x) for x in line[1].split(',')[0].split()]
    total_price = sum(price * (1 - float(discount) / 100.0) for price, discount in zip(prices, discounts))
    print("%.2f" % total_price)