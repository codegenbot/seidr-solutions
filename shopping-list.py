import numpy as np


def shopping_list(prices, discounts):
    prices = [float(price) for price in prices]
    discounts = [float(discount) for discount in discounts]
    return np.sum(prices * (1 - discounts / 100))