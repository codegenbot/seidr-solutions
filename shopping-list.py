def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, [float(x) for x in input().split()]))
    print("{:.1f}".format(sum(p * (1 - d/100) for p, d in zip(prices, discounts))))