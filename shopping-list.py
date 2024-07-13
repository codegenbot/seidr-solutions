def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    _ = input()  # Read and discard the discount information
    total_price = sum(price * (1 - float(input()) / 100.0) for _ in range(n))
    print(format(total_price, ".2f"))