def shopping_list():
    total_price = 0
    while True:
        try:
            inputs = input().split()
            price = float(inputs[0])
            discount = float(inputs[1])
            total_price += price - (price * (discount / 100))
        except ValueError:
            break
    return round(total_price, 2)

print(shopping_list())