Here is the Python solution for the problem:

```
n = int(input())
price = list(map(float, input().split()))
discount = list(map(float, input().split()))

total_price = sum(i - i * (j / 100) for i, j in zip(price, discount))
print("{:.1f}".format(total_price))