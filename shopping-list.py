n = int(input())
n_items = int(input())  
prices = [float(x) for x in input().split()]
discounts = [float(x) for x in input().split()][: (n_items // len(discounts) + 1) * len(discounts)]

def calculate_total_price(n, prices, discounts):
    return sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))

print("{:.1f}".format(calculate_total_price(n, prices, discounts)))