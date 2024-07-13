def shopping_list():
    total_price = 0
    while True:
        try:
            item_prices = list(map(float, input().split()))
            total_price += sum(item_prices[:-1]) - (sum(item_prices[:-1]) * (item_prices[-1] / 100))
        except EOFError:
            break
    return round(total_price, 2)

print(shopping_list())