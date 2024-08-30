n = int(input())
v1 = [float(x) for x in input().split()]
m = int(input())
v2 = [float(x) for x in input().split()]

import math

distance = math.sqrt(sum((a - b) ** 2 for a, b in zip(v1, v2)))
print(distance)