def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    print(
        "{:.1f}".format(
            sum(
                [
                    x
                    for p, d in zip(prices, discounts)
                    for x in [round(p * (1 - d / 100))]
                ]
            )
        )
    )