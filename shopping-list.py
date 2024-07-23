def shopping_list():
    try:
        n = int(input())
        prices = list(map(float, input().split()))
        discounts = list(map(lambda x: float(x)/100, input().split()))
        total_price = sum((price * (1 - discount)) for price, discount in zip(prices, discounts))
        return f"{total_price:.2f}"
    except Exception as e:
        print(f"An error occurred: {e}")