def shopping_list(prices, discounts):
    total_price = sum(prices)
    for i in range(len(prices)):
        total_price -= (prices[i] * discounts[i] / 100)
    return round(total_price, 2)

n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

result = shopping_list(prices, discounts)
print(result)