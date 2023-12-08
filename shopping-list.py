import numpy as np

def calculate_total_price(prices, discounts):
    total_price = np.sum(prices * (1 - discounts/100))
    return total_price

num_items = int(input())
prices = np.array(input().split(), dtype=float)
discounts = np.array(input().split(), dtype=float)

total_price = calculate_total_price(prices, discounts)
print(total_price)