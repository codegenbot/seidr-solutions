[PYTHON]
def shopping_list(prices, discounts):
    total = 0.0
    for i in range(len(prices)):
        total += prices[i] * (1 - discounts[i])
    return total
[/PYTHON]
[TESTS]
# Test case 1:
assert shopping_list([10, 20, 30], [0.1, 0.2, 0.3]) == 49.7
# Test case 2:
assert shopping_list([10, 20, 30], [0.5, 0.2, 0.3]) == 68.5
[/TESTS]
