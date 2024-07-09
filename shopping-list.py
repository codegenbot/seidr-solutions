def main():
    n = int(input())
    items = list(map(float, input().split()))
    discounts = [float(x * 0.01) for x in input().split()]
    total_price = sum([item * (1 - discount) for item, discount in zip(items, discounts)])
    print("{:.2f}".format(total_price))