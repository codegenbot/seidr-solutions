import numpy as np

n = int(input())
vec1 = list(map(float, input().split()))
vec2 = list(map(float, input().split()))

distance = round(np.linalg.norm([a - b for a, b in zip(vec1, vec2)]), 10)

print(distance)