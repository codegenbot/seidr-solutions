```
def shopping_list():
    n = int(input())
    prices, discounts = [float(num) for num in input().split()], [float(num) for num in input().split()]
    total_price = 0.0
    for price, discount in zip(prices, discounts):
        total_price += price - (price * (discount / 100))
    return round(total_price, 1)

print(shopping_list())