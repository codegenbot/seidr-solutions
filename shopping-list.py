num_items = int(input())
prices = list(map(float, input().split()))
num_discounts = int(input())
discounts = list(map(float, input().split()))

total_price = sum(
    [price * (1 - discount / 100) for price, discount in zip(prices, discounts)]
)
print(total_price)