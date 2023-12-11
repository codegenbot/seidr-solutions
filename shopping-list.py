
Here is a modified version of the code that should solve the problem:
```
def shopping_list(prices, discounts):
    total = 0
    for i in range(len(prices)):
        price = prices[i]
        discount = discounts[i]
        total += (price - (price * discount / 100))
    return total
```
The code above calculates the total cost of a shopping list by iterating through each item, applying the corresponding discount, and adding the result to a running total. The function returns the final total cost.