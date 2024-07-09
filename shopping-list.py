def shopping_list():
    n = int(input())
    prices_str = input().split()
    discounts_str = input().split()
    total_price = sum(float(price) * (1 - float(discount)/100) for price, discount in zip(prices_str, discounts_str))
    return "{:.2f}".format(total_price)