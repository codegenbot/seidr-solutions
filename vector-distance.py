v1 = list(map(float, input().split()))
m = int(input())
v2 = list(map(float, input().split()))

from math import sqrt

v1_len = sum([i**2 for i in v1])
v2_len = sum([i**2 for i in v2])

dist = sqrt(v1_len + v2_len - 2*sum(i for i,j in zip(v1,v2)))

print("%.6f" % dist)