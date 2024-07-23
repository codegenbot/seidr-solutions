def shopping_list():
    n = int(input())
    total_price = 0
    for _ in range(n):
        temp = list(map(float, input().split()))
        prices, discounts = temp[0], temp[1:]
        total_price += sum(p * (1 - d / 100) for p, d in zip(prices, discounts))
    print("{:.2f}".format(total_price))