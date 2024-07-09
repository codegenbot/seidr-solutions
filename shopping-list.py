def main():
    n = int(input())
    items = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = sum([item * (1 - discount / 100) for item, discount in zip(items, discounts)])
    print("{:.2f}".format(total_price))