def shopping_list():
    _, n = map(int, input().split())
    prices = list(map(float, input().split()))
    discounts = list(map(float, [x/100 for x in input().split()]))
    total_price = 0
    for i in range(n):
        price = prices[i] * (1 - discounts[i])
        total_price += price
    return format(total_price, ".2f")