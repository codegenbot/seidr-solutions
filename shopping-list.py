def shopping_list():
    n = int(input())
    prices = [float(i) for i in input().split()]
    discounts = [float(i) for i in input().split()]
    total_price = sum(p - (p * d / 100) for p, d in zip(prices, discounts))
    print(round(total_price, 1))


if __name__ == "__main__":
    shopping_list()