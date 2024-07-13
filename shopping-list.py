```
def shopping_list():
    total_price = 0
    while True:
        try:
            price_discount = input().split()
            price = float(price_discount[0])
            discount = float(price_discount[1].strip())
            total_price += price - (price * (discount / 100))
        except ValueError:
            break
    return round(total_price, 2)

print(shopping_list())