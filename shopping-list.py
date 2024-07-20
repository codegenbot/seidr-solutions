n = int(input())
prices = [float(x) for x in input().split()]
discounts = [float(x) for x in input().split()][:n]

def calculate_total_price(n, prices, discounts):
    total_price = sum(price - (price * discount / 100) for price, discount in zip(prices, discounts))
    return "{:.1f}".format(total_price)

print(calculate_total_price(n, prices, discounts))