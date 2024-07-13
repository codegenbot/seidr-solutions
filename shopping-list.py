```
def shopping_list():
    total_price = 0
    goods_prices = []
    while True:
        try:
            prices_discounts = input().split()
            for price_discount in zip(*[iter(prices_discounts)]*2):
                price, discount = map(float, price_discount)
                total_price += price - (price * (discount / 100))
        except EOFError:
            break
    return round(total_price, 2)

print(shopping_list())