def shopping_list(price, discount):
    total = 0.0
    for i in range(len(price)):
        total += price[i] * (1 - discount[i] / 100)
    return total