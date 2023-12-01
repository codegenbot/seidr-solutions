import numpy as np

def calculate_distance(n, vector1, vector2):
    v1 = np.array(vector1)
    v2 = np.array(vector2)
    distance = np.linalg.norm(v1 - v2)
    return distance

n = int(input())
vector1 = list(map(float, input().split()))
n = int(input())
vector2 = list(map(float, input().split()))

result = calculate_distance(n, vector1, vector2)
print(result)