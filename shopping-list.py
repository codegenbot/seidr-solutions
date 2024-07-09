def main():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = [float(d) / 100 for d in map(float, input().split())]
    total_price = sum([price * (1 - d/100) for price, d in zip(prices, discounts)])
    print("{:.2f}".format(total_price))

if __name__ == "__main__":
    main()