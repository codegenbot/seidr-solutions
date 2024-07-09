def main():
    n = int(input())
    prices = [float(p) for p in input().split()]
    discounts = [float(d) / 100 for d in map(float, input().split())]
    total_price = sum([price * (1 - discount) for price, discount in zip(prices, discounts)])
    print("{:.2f}".format(total_price))

if __name__ == "__main__":
    main()