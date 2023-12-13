import math

def vector_distance():
    n = int(input())
    vector1 = list(map(float, input().split()))
    m = int(input())
    vector2 = list(map(float, input().split()))
    
    distance = 0.0
    for i in range(n):
        distance += (vector1[i] - vector2[i]) ** 2
    
    distance = math.sqrt(distance)
    return distance

print(vector_distance())