def calculate_total_price(prices, discounts):
    total_price = sum(prices[i] * (100 - discounts[i]) / 100 for i in range(len(prices)))
    return total_price