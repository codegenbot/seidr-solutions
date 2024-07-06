import numpy as np


def shopping_list(prices, discounts):
    return np.sum(float(prices) * (1 - float(discounts) / 100))