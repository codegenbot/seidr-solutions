n = int(input())
v1 = list(map(float, input().split()))
m = int(input())
v2 = list(map(float, input().split()))

from math import sqrt

v1_len = sum([i**2 for i in v1])
v2_len = sum([i**2 for i in v2])

diff_vector = [(a - b) ** 2 for a, b in zip(v1, v2)]
dist = sqrt(sum(diff_vector) + (v1_len - 2 * sum(diff_vector)) + v2_len)

print("%.6f" % dist)