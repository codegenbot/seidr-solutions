```
def shopping_list():
    input_str1 = input().split()
    prices1 = list(map(float, input_str1[:-1]))
    discounts1 = float(input_str1[-1]) / 100
    input_str2 = input().split()
    prices2 = list(map(float, input_str2))
    total_price = sum(
        price * (1 - discounts1)
        for price in prices2
    )
    print("%.2f" % total_price)