import numpy as np


def shopping_list(prices, discounts):
    prices = input("Enter prices: ")
    discounts = input("Enter discounts: ")
    return np.sum(prices * (1 - discounts / 100))