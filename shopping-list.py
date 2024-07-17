def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    print("{:.1f}".format(sum([float("".join(map(str, map(lambda x: str(int(x - (x * d / 100))), p)))) for p, d in zip(prices, discounts)])))