n = int(input())
v1 = list(map(float, input().split()))
m = int(input())
v2 = list(map(float, input().split()))

from math import sqrt

v_diff = [(a - b) ** 2 for a, b in zip(v1, v2)]
dist = sqrt(sum(v_diff) + sum(i**2 for i in v1) + sum(i**2 for i in v2))

print("%.6f" % dist)