import numpy as np


def shopping_list(prices, discounts):
    prices = list(
        map(
            float, input("Enter the prices of the items separated by a space: ").split()
        )
    )
    discounts = list(
        map(
            float,
            input("Enter the discounts of the items separated by a space: ").split(),
        )
    )
    return np.sum(prices * (1 - discounts / 100))