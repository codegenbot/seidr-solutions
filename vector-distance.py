n = int(input())
v1 = list(map(float, input().split()))
m = int(input())
v2 = list(map(float, input().split()))

from math import sqrt

v1_len = sum([i**2 for i in v1])
v2_len = sum([i**2 for i in v2])

dist = sqrt(abs(v1_len - 2*sum(i**2 for i in (a-b) for a,b in zip(v1,v2)) + v2_len))

print("%.6f" % dist)