num_items = int(input())
prices = list(map(float, input().split()))
num_discounts = int(input())
discounts = list(map(float, input().split()))

total_price = sum(
    [(prices[i] - (prices[i] * discounts[i] / 100)) for i in range(num_items)]
)
print(total_price)