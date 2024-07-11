from math import sqrt, isclose

n = int(input())
v1 = list(map(float, input().split()))
m = int(input())
v2 = list(map(float, input().split()))

dist = sum((a - b) ** 2 for a, b in zip(v1, v2))
dist_sqrt = sqrt(dist)

print("%.6f" % dist_sqrt if isclose(dist_sqrt, int(dist_sqrt)) else "%.6f" % dist_sqrt)