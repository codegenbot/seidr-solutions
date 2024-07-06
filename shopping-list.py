import numpy as np


def shopping_list(prices, discounts):
    prices = [float(price) for price in input("Enter prices: ").split()]
    discounts = [float(discount) for discount in input("Enter discounts: ").split()]
    return np.sum(prices * (1 - discounts / 100))