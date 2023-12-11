def shopping_list(prices, discounts):
    total = 0
    for i in range(len(prices)):
        price_after_discount = prices[i] - (prices[i] * discounts[i])
        total += price_after_discount
    return total