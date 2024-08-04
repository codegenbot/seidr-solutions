def shopping_list(prices, discounts):
    total_price = sum(
        [(price - price * discount / 100) for price, discount in zip(prices, discounts)]
    )
    return total_price


n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

result = shopping_list(prices, discounts)
print(result)