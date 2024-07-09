```
def main():
    n = int(input())
    items = list(map(float, input().split()))
    discounts = list(map(lambda x: float(x) / 100, input().split()))
    item_discounts = []
    for i in range(n):
        item_discounts.append((items[i], discounts[i]))
    total_price = sum([item * (1 - discount) for item, discount in item_discounts])
    print("{:.2f}".format(total_price))