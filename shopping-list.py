def calculate_total_price(prices, discounts):
    total_price = 0
    for i in range(len(prices)):
        price = prices[i]
        discount = discounts[i]
        total_price += price * (1 - discount)
    return total_price