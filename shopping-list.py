```
def shopping_list():
    num_trips = int(input())
    total_price = 0
    for _ in range(num_trips):
        n = int(input())
        prices = list(map(float, input().split()))
        discounts = list(map(float, input().split()))
        total_trip_price = sum(
            price * (1 - discount / 100) for price, discount in zip(prices, discounts)
        )
        total_price += total_trip_price
    return total_price