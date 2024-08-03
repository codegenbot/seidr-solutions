def shopping_list(price_list, discount_list):
    total_price = sum([p - (p * d / 100) for p, d in zip(price_list, discount_list)])
    return round(total_price, 2)