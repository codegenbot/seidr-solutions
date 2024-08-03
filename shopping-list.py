def shopping_list():
    n = int(input())
    prices = np.array([float(x) for x in input().split()])
    discounts = np.array([float(x) for x in input().split()])
    total_price = 0
    for i in range(n):
        total_price += (1 - discounts[i] / 100) * prices[i]
    return format(total_price, ".1f")