def main():
    n = int(input())
    items = list(map(float, input().split()))
    discounts = list(map(lambda x: float(x) / 100, input().split()))
    total_price = sum([item * (1 - discount) for item, discount in zip(items, discounts)])
    print("{:.2f}".format(total_price))