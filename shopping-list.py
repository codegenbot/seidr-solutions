n = int(input())
prices = list(map(float, input().split())) * (n // len(input().split()) + 1)][:n]
discounts = list(map(float, input().split())) * (n // len(input().split()) + 1))[:n]

total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
print(total_price)