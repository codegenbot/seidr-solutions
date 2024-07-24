```
def shopping_list():
    prices_discounts = [float(x) for x in input().split()]
    
    if len(prices_discounts) % 2 != 0:
        return "Invalid Input"

    prices = prices_discounts[:len(prices_discounts)//2]
    discounts = prices_discounts[len(prices_discounts)//2:]

    total_price = sum(
        price * (1 - discount / 100) for price, discount in zip(prices, discounts)
    )

    return "{:.2f}".format(total_price)

if __name__ == '__main__':
    print(shopping_list())