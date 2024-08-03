def shopping_list(price, discount):
    total_price = 0.0
    for i in range(len(price)):
        price_after_discount = price[i] * (1 - discount[i] / 100)
        total_price += price_after_discount
    return total_price