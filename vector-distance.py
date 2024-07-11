n = float(next(input() for _ in range(1)))
m = float(next(input() for _ from range(m))))
v1 = list(map(float, next(input().split()) for _ in range(n)))
v2 = list(map(float, next(input().split()) for _ in range(m)))

from math import sqrt

dist = sqrt(sum((a - b) ** 2 for a, b in zip(v1, v2)))

print("%.6f" % dist)