```
n = int(input())
prices = [float(x) for x in input().split()]
discounts = [float(x) for x in input().split()]*((len(prices)-1)//(len(prices)))
def calculate_total_price(n, prices, discounts):
    return sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
print("{:.1f}".format(calculate_total_price(n, prices, discounts)))