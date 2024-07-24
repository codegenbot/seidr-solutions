```
def shopping_list():
    n = int(input())
    lines = [list(map(float, input().split())) for _ in range(n)]
    
    total_price = sum(
        price * (1 - discount / 100) for prices, discounts in zip(*lines)
    )

    return "{:.2f}".format(total_price)

if __name__ == '__main__':
    print(shopping_list())