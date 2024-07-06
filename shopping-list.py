import numpy as np


def shopping_list(prices, discounts):
    prices = [float(x) for x in input("Enter prices: ").split()]
    discounts = [float(x) for x in input("Enter discounts: ").split()]
    total_price = np.sum(
        [prices[i] * (1 - discounts[i] / 100) for i in range(len(prices))]
    )
    return f"Total price after discount: {total_price}"