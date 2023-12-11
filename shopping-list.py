import numpy as np

def shopping_list(prices, discounts):
    return np.sum(prices * (1 - discounts / 100))