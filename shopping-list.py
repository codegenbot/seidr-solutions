def calculate_total_price(prices, discounts):
    discounted_prices = [
        price * (1 - discount / 100) for price, discount in zip(prices, discounts)
    ]
    return sum(discounted_prices)


n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

result = calculate_total_price(prices, discounts)
print(result)