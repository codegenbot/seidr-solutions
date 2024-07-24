def shopping_list(prices, discounts):
    total_price = 0
    for i in range(len(prices)):
        total_price += prices[i] - (prices[i] * discounts[i] / 100)
    return round(total_price, 1)


n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

print(shopping_list(prices, discounts))