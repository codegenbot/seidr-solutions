n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = 0
for price, discount in zip(prices, discounts):
    total_price += price - (price * discount / 100)

print(format(total_price, ".1f"), end="")