def shopping_list(price_vector, discount_vector):
    return sum(p - (p * d / 100) for p, d in zip(price_vector, discount_vector))