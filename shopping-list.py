```
def shopping_list():
    total_price = 0
    while True:
        try:
            inputs = input().split()
            for i in range(0, len(inputs), 2):
                price = float(inputs[i])
                discount = float(inputs[i+1].strip('%'))
                total_price += price - (price * (discount / 100))
        except ValueError:
            break
    return round(total_price, 2)

print(shopping_list())