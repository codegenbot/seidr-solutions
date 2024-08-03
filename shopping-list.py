def shopping_list(price, discount):
    return sum(
        x - x * (y / 100) for x, y in zip(map(float, price), map(float, discount))
    )