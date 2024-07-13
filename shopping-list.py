def shopping_list(prices, discounts):
    total_price = 0
    for i in range(len(prices)):
        price = prices[i]
        discounted_price = price - (price * (discounts[i] / 100))
        total_price += discounted_price
    return round(total_price, 2)