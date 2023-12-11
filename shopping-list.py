[PYTHON]
def get_total_price(prices, discounts):
    return sum(price * (1 - discount) for price, discount in zip(prices, discounts))
[/PYTHON]
[TESTS]
# Test case 1:
assert get_total_price([10.0, 20.0, 30.0], [5.0, 10.0, 95.0]) == 29.0
# Test case 2:
assert get_total_price([20.0, 20.0], [100.0, 50.0]) == 36.0
# Test case 3:
assert get_total_price([10.0, 20.0, 30.0], [5.0, 10.0, 95.0]) == 29.0
[/TESTS]
