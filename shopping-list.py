def calculate_total_price():
    num_items = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    discounted_prices = [
        price - (price * discount / 100) for price, discount in zip(prices, discounts)
    ]
    total_price = sum(discounted_prices)

    return total_price