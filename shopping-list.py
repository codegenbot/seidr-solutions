```
def main():
    items = list(map(float, input().split()))
    n = len(items)
    discounts = list(map(float, input().split()))
    assert len(discounts) == n
    total_price = sum([item * (1 - discount / 100) for item, discount in zip(items, discounts)])
    print("{:.2f}".format(total_price))