def shopping_list():
    total_price = 0
    while True:
        try:
            price = float(input())
            discount = float(input())
            total_price += price - (price * (discount / 100))
        except EOFError:
            break
    return round(total_price, 2)

print(shopping_list())