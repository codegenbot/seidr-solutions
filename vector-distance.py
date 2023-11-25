import math

n = int(input())
vector1 = list(map(float, input().split()))
vector2 = list(map(float, input().split()))

euclidean_distance = math.sqrt(sum((a - b) ** 2 for a, b in zip(vector1, vector2)))
print(euclidean_distance)