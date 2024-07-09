def main():
    n = int(input())
    items = list(map(float, input().split()))
    discounts = list(map(lambda x: float(x)/100, input().split()))
    total_price = sum([price * (1 - discount) for price, discount in zip(items, discounts)])
    print("{:.2f}".format(total_price))

if __name__ == "__main__":
    main()