def shopping_list():
    total_price = 0
    while True:
        try:
            prices_discounts = input().split()  
            price, discount = map(float, prices_discounts)  
            total_price += price - (price * (discount / 100))
        except ValueError:
            break
    return round(total_price, 2)

print(shopping_list())