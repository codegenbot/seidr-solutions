n = int(input())
prices = [float(x) for x in input().split()]
discounts = [float(x) for x in input().split()][:n]

print("{:.1f}".format(calculate_total_price(n, prices, discounts)))