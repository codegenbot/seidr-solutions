def calculate_discount(prices, discounts):
    return np.sum([price * (1 - discount) for price, discount in zip(prices, discounts)])