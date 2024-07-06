import numpy as np


def shopping_list(prices, discounts):
    prices = [float(input("Enter prices: "))]
    discounts = [float(input("Enter discounts: "))]
    return np.sum(prices * (1 - discounts / 100))