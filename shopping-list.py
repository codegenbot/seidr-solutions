def shopping_list(price, discount):
    total_price = sum(p * (1 - d / 100) for p, d in zip(price, discount))
    return round(total_price, 2)