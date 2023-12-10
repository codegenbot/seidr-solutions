[PYTHON]
def get_total_price(prices, discounts):
    total = 0.0
    for i in range(len(prices)):
        total += prices[i] * (1 - discounts[i] / 100)
    return total
[/PYTHON]
[TESTS]
# Test case 1:
assert get_total_price([10.0, 20.0, 30.0], [5.0, 10.0, 95.0]) == 29.0
# Test case 2:
assert get_total_price([20.0, 20.0], [100.0, 50.0]) == 10.0
# Test case 3:
assert get_total_price([20.0, 20.0], [20.0, 0.0]) == 36.0
[/TESTS]
