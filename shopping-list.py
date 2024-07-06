
import numpy as np

def shopping_list(prices, discounts):
    prices = map(float, input("Enter prices: ").split())
    discounts = map(float, input("Enter discounts: ").split())
    return np.sum([p * (1 - d / 100) for p, d in zip(prices, discounts)])