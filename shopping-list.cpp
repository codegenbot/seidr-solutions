[PYTHON]
def get_total_price(prices, discounts):
    total = 0.0
    for i in range(len(prices)):
        total += prices[i] * (1 - discounts[i] / 100.0)
    return total
[/PYTHON]
[TESTS]
# Test case 1:
assert get_total_price([1, 2, 3], [10, 20, 30]) == 6.0
# Test case 2:
assert get_total_price([1, 2, 3], [10, 20, 30]) == 6.0
# Test case 3:
assert get_total_price([1, 2, 3], [10, 20, 30]) == 6.0
[/TESTS]
