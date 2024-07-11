n = int(input())
v1 = list(map(float, input().split()))
m = int(input())
v2 = list(map(float, input().split()))

from math import sqrt

vector_sum = sum((i-j)**2 for i,j in zip(v1,v2))
dist = sqrt(vector_sum)

print("%.6f" % dist)