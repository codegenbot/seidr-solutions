n = int(input())
v1 = [float(i) for i in input().split()]
n = int(input())
v2 = [float(i) for i in input().split()]

import math

distance = math.sqrt(sum((a - b) ** 2 for a, b in zip(v1, v2)))
print(distance)