def shopping_list(price, discount):
    return sum(
        i - i * (j / 100)
        for i, j in zip(map(float, price.split()), map(float, discount.split()))
    )