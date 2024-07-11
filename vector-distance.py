n = int(input())
v1 = list(map(float, input().split()))
n2 = int(input())
v2 = list(map(float, input().split()))

import math


def vector_distance(v1, v2):
    return math.sqrt(sum((a - b) ** 2 for a, b in zip(v1, v2)))


print(vector_distance(v1, v2))