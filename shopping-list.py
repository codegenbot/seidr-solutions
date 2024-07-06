import numpy as np


def shopping_list(prices, discounts):
    prices = [np.input_as_float("Enter prices: ", 0.0)]
    discounts = [np.input_as_float("Enter discounts: ", 0.0)]
    return np.sum(prices * (1 - discounts / 100))