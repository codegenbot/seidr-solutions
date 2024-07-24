```
def shopping_list():
    n = int(input())
    price_list = list(map(float, input().split()))
    discount_list = list(map(float, input().split()))

    total_price = sum(price * (1 - discount / 100) for price, discount in zip(price_list, discount_list))

    return "{:.2f}".format(total_price)

if __name__ == '__main__':
    print(shopping_list())