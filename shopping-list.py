n = int(input())
prices_str = input().split()
prices = list(map(float, prices_str))
discounts_str = input().split()
discounts = list(map(float, discounts_str))

total_price_before_discount = sum(price for price in prices)
total_price_after_discount = sum(
    price * (1 - discount / 100) for price, discount in zip(prices, discounts)
)

print(
    round(
        total_price_before_discount
        + total_price_after_discount
        - total_price_after_discount,
        1,
    )
)