
def shopping_list(prices, discounts):
   total = 0
   for i in range(len(prices)):
       if discounts[i] < 1:
           total += (prices[i] * (1 - discounts[i]))
       else:
           total += prices[i]
   return total