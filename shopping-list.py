```
def shopping_list():
    total_price = 0
    while True:
        try:
            price = float(input())
            discount = float(input())
            total_price += round(price - (price * (discount / 100)), 2)
        except ValueError:
            break
    return total_price

print(shopping_list())