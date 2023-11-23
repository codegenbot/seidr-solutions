import math

def calculate_distance(vector1, vector2):
    distance = 0
    for i in range(len(vector1)):
        distance += (vector1[i] - vector2[i]) ** 2
    return math.sqrt(distance)

n = int(input())
vector1 = list(map(float, input().split()))
m = int(input())
vector2 = list(map(float, input().split()))

result = calculate_distance(vector1, vector2)
print(result)