import math

def calculate_distance(n, vector1, vector2):
    distance = 0.0
    for i in range(n):
        distance += (vector1[i] - vector2[i]) ** 2
    return math.sqrt(distance)

n = int(input())
vector1 = list(map(float, input().split()))
n = int(input())
vector2 = list(map(float, input().split()))

result = calculate_distance(n, vector1, vector2)
print(result)