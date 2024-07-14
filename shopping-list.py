```
def shopping_list():
    while True:
        try:
            prices = list(map(float, input().split()))
            discounts = list(map(float, input().split()))
            quantities = list(map(int, input().split()))

            if len(prices) != len(discounts) or len(discounts) != len(quantities):
                raise ValueError

            return round(sum(p * q * (1 - d / 100) for p, q, d in zip(prices, quantities, discounts)), 2)
        except ValueError:
            pass


while True:
    print(shopping_list())