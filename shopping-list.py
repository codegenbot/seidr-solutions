
def shopping_list(prices, discounts):
    return sum((prices[i] * (1 - discounts[i])) for i in range(len(prices)))