```
def main():
    n = int(input())
    items = list(map(float, input().split()))
    discounts = [float(item) / 100 for item in map(float, input().split())]
    total_price = sum([price * (1 - discount/100) for price, discount in zip(items[::2], items[1::2])])
    print("{:.2f}".format(total_price))

if __name__ == "__main__":
    main()