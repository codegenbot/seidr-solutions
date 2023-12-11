def shopping_list(prices, discounts):
    total = 0
    for i in range(len(prices)):
        price = prices[i]
        discount = discounts[i]
        total += (price - (price * discount / 100))
    return total