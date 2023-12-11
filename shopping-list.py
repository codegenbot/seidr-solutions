def shopping_list(prices, discounts):
     total = 0
     for i in range(len(prices)):
        if discounts[i] >= 1:
            return 0
        else:
           total += prices[i] * (1 - discounts[i])
     return total