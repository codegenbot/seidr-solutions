```
from math import sqrt

v1 = list(map(float, input().split()))
v2 = list(map(float, input().split()))

dist = sqrt(sum((a - b) ** 2 for a, b in zip(v1, v2)))

print("%.6f" % dist)