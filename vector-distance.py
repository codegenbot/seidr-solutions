import math

n = int(input())
vec1 = list(map(float, input().split()))
vec2 = list(map(float, input().split()))

total_distance = sum((a - b) ** 2 for a, b in zip(vec1, vec2)) ** 0.5

print(round(total_distance, 10))