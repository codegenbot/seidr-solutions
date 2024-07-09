def main():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = [float(d) / 100 for d in map(float, input().split())]
    total_price = sum([price - (price * discount / 100) for price, discount in zip(prices, discounts)])
    print(str(format(total_price, "#.2f")))

if __name__ == "__main__":
    main()