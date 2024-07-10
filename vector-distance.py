n = int(input())
v1 = list(map(float, input().split()))
m = int(input())
v2 = list(map(float, input().split()))

from math import sqrt

dist = 0
for a, b in zip(v1, v2):
    dist += (a - b) ** 2
dist = sqrt(dist)

print("%.6f" % dist)