n = int(input().strip())
prices = list(map(float, input().strip().split()))
m = int(input().strip())
discounts = list(map(float, input().strip().split()))

total_price = sum(
    (price - price * discount / 100) for price, discount in zip(prices, discounts)
)
print(total_price)