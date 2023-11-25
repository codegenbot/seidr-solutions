import math

n = int(input())
vector1 = list(map(float, input().split(' ')))
vector2 = list(map(float, input().split(' ')))
distance = sum((a - b)**2 for a, b in zip(vector1, vector2))
print(math.sqrt(distance))