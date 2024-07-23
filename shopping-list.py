n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

if len(prices) != n or len(discounts) != n:
    print("Number of elements in prices and discounts vectors must be equal to", n)
else:
    total_price = sum([(1 - discounts[i] / 100) * prices[i] for i in range(n)])
    print(total_price)