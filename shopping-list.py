```
def shopping_list():
    total_price = 0
    while True:
        try:
            prices_discounts = input().split()
            price = float(prices_discounts[0])
            discount = float(prices_discounts[1]) / 100
            total_price += price - (price * discount)
        except ValueError:
            break
    return round(total_price, 2)

print(shopping_list())