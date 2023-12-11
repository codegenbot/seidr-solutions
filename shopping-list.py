def get_total_price(prices, discounts):
    return sum([prices[i] * (1 - discounts[i]/100) for i in range(len(prices))])