```python
from math import sqrt, fsum
from decimal import Decimal

n = int(input())
v1 = list(map(Decimal, input().split()))
m = int(input())
v2 = list(map(Decimal, input().split()))

dist = sqrt(fsum((a - b) ** 2 for a, b in zip(v1, v2)))

print("%.6f" % dist)