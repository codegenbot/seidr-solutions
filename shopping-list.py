def calculate_total_price(n, prices, discounts):
    total_price = 0
    for i in range(n):
        price = prices[i]
        discount = (discounts[i] / 100) * price
        total_price += price - discount
    return total_price


n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

print("{:.1f}".format(calculate_total_price(n, prices, discounts)))