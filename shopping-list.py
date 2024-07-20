```
n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

def calculate_total_price(n, prices, discounts):
    total_price = sum(p * (1 - d / 100) for p, d in zip(prices, discounts))
    return "{:.1f}".format(total_price)

print(calculate_total_price(n, prices, discounts))