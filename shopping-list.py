```
def calculate_total_price(n, prices, discounts):
    total_price = 0
    for price, discount in zip(prices, discounts):
        total_price += price - (discount / 100) * price
    return total_price


n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

print("{:.1f}".format(calculate_total_price(n, prices, discounts)))