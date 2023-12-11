def get_total_price(prices, discounts):
    total = 0
    for i in range(len(prices)):
        price = prices[i]
        discount = discounts[i] / 100
        total += (price * (1 - discount))
    return total