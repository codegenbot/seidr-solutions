def shopping_list():
    total_price = 0
    while True:
        try:
            price, discount = map(float, input().split())
            total_price += price - (price * (discount / 100))
        except ValueError:
            break
    return round(total_price, 2)

print(shopping_list())