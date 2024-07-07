```
def shopping_list():
    """
    Given a vector of ﬂoats representing the prices of various shopping goods 
    and another vector of floats representing the percent discount of each of those goods, 
    return the total price of the shopping trip after applying the discount to each item.
    """
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = sum(p - (p * d / 100) for p, d in zip(prices, discounts))
    return round(total_price, 1)

print(shopping_list())