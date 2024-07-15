import math
n = int(input())
vec1 = [float(i) for i in input().split()]
vec2 = [float(i) for i in input().split()]

distance = math.sqrt(sum((a - b) ** 2 for a, b in zip(vec1, vec2)))
print(round(distance, 10))