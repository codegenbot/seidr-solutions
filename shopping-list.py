```
n = int(input())
prices = list(map(float, input().split()))
discounts = [list(map(float, input().split())) for _ in range(n)]

def calculate_total_price():
    total_price = sum((price * (100 - discount) / 100) for price, discount in zip(prices, *discounts))
    print(format(total_price, ".1f"))

calculate_total_price()