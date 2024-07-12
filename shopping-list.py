```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    if len(prices) == n and len(discounts) == n:
        for i in range(n):
            total_price += prices[i] * (1 - discounts[i] / 100)
    return round(total_price, 2)

if __name__ == "__main__":
    print(shopping_list())