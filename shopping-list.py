def shopping_list(price_list, discount_list):
    total_price = 0
    for i in range(len(price_list)):
        total_price += price_list[i] * (1 - discount_list[i] / 100)
    return round(total_price, 2)