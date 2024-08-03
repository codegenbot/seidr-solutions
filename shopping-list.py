def shopping_list(price_list, discount_list):
    total_price = 0
    for price, discount in zip(price_list, discount_list):
        discounted_price = price - (price * (discount / 100))
        total_price += discounted_price
    return round(total_price, 1)