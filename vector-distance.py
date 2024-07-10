n = int(input())
v1 = [float(f"{input()}.0000") for _ in range(n)]
m = int(input())
v2 = [float(f"{input()}.0000") for _ in range(m)]

from math import sqrt

dist = sqrt(sum((a - b) ** 2 for a, b in zip(v1, v2)))

print("%.6f" % dist)