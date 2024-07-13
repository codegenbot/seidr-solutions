```python
def shopping_list():
    total_price = 0
    while True:
        try:
            price = float(input())
            if price < 0: 
                break
            discount = float(input())
            total_price += price - (price * (discount / 100))
        except ValueError:
            print("Invalid input. Please enter a number.")
    return round(total_price, 2)

print(shopping_list())