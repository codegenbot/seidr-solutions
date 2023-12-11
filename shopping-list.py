
def shopping_list(prices, discounts):
    total = 0
    for i in range(len(prices)):
        total += (prices[i] * (1 - discounts[i]))
    return total

# test the function with the following code
assert shopping_list([10,20,30], [0.1,0.2,0.3]) == 58.7
assert shopping_list([10,20,30], [0.1,0.2,0.4]) == 62.6