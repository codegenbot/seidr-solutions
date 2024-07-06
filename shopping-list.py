import numpy as np


def shopping_list():
    prices = map(float, input("Enter prices (e.g., 10.50 20.25): ").split())
    discounts = map(float, input("Enter discounts (e.g., 5% 10%): ").split())
    try:
        return np.sum(prices * (1 - discounts))
    except ValueError:
        print("Invalid input! Please enter valid numbers.")