def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = [p * (float(d) / 100) for p, d in zip(map(float, input().split()), input().split())]
    print("{:.1f}".format(sum(p * (1 - d) for p, d in zip(prices, discounts))))