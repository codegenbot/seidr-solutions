def shopping_list(price_list, discount_list):
    total_price = 0.0
    for i in range(len(price_list)):
        price = price_list[i]
        discount = price * (discount_list[i] / 100)
        total_price += price - discount
    return round(total_price, 2)