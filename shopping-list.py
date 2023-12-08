import numpy as np

def calculate_total_price(prices, discounts):
    total_price = np.sum(prices * (1 - discounts/100))
    return total_price

prices = np.array(list(map(float, input().split())))
discounts = np.array(list(map(float, input().split())))

total_price = calculate_total_price(prices, discounts)
print(float(total_price))