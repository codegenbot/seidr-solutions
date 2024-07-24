Here is the solution:

def shopping_list(prices, discounts):
    total_price = 0.0
    for i in range(len(prices)):
        price = prices[i]
        discount = (price * discounts[i]) / 100.0
        total_price += (price - discount)
    return round(total_price, 1)