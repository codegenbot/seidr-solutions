def main():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = [float(d) / 100 for d in map(float, input().split())]
    total_price = sum([price - (price * discount / 100) for price, discount in zip(prices, discounts)])
    print("{:.2f}".format(total_price))