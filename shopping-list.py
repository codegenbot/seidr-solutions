def calculate_total_price(prices, discounts):
    total_price = sum(prices)
    for price, discount in zip(prices, discounts):
        total_price -= price * discount / 100
    return total_price


def read_input():
    num_items = int(input())
    prices = list(map(float, input().split()))
    num_discounts = int(input())
    discounts = list(map(float, input().split()))
    return prices, discounts


def main():
    prices, discounts = read_input()
    total_price = calculate_total_price(prices, discounts)
    print(total_price)


if __name__ == "__main__":
    main()