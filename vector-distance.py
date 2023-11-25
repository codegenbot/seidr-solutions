import math
n = int(input())
vector1 = list(map(float, input().split(' ')))
vector2 = list(map(float, input().split(' ')))
squared_diff = sum((a - b) ** 2 for a, b in zip(vector1, vector2))
euclidean_distance = math.sqrt(squared_diff)
print(euclidean_distance)