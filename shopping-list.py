def shopping_list():
    items = list(map(float, input().split()))
    discounts = list(map(int, (x.split('.')[0] for x in input().split())))
    total_price = sum((1 - d / 100) * p for p, d in zip(items, discounts))
    return round(total_price, 2)

print(shopping_list())