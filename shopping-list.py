n = int(input())
items = []
discounts = []
for _ in range(n):
    items.append(float(input()))
    discounts.append(float(input()))
total_price = sum(
    [item * (1 - discount / 100) for item, discount in zip(items, discounts)]
)
print("{:.2f}".format(total_price))