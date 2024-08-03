def shopping_list(price, discount):
    return sum(p * (1 - d / 100) for p, d in zip(price, discount))