def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    if len(prices) != n or len(discounts) != n:
        return float("%.2f" % total_price)


print(shopping_list())