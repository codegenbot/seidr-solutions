n = int(input())
prices, discounts = [float(x) for x in input().split()], [
    float(x) for x in input().split()
]

total_price = sum(
    max(0, price - (price * discount / 100))
    for price, discount in zip(prices, discounts)
)

print(total_price)