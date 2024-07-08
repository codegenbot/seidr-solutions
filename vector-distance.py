n = int(input())
v1 = list(map(float, input().split()))
m = int(input())
v2 = list(map(float, input().split()))

import math

distance = 0
for i in range(n):
    distance += (v1[i] - v2[i]) ** 2

print(math.sqrt(distance))