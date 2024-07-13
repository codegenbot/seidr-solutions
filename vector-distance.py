n = int(input())
v1 = list(map(float, input().split()))
m = int(input())
v2 = list(map(float, input().split()))

import math


def vector_distance(n, v1, m, v2):
    return math.sqrt(sum((a - b) ** 2 for a, b in zip(v1, v2)))


print(vector_distance(n, v1, m, v2))