def shopping_list(price, discount):
    return sum(p - p * d / 100 for p, d in zip(price, discount))