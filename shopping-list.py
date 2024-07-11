def shopping_list(price, discount):
    total = 0.0
    for p, d in zip(price, discount):
        total += p * (1 - d / 100)
    return round(total, 2)