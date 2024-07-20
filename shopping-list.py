```
n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

def calculate_total_price(n, prices, discounts):
    total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
    return "{:.1f}".format(total_price)

print(calculate_total_price(n, prices, discounts))