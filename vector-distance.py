import numpy as np

def vector_distance():
    n = int(input())
    vector1 = np.array(list(map(float, input().split())))
    vector2 = np.array(list(map(float, input().split())))

    distance = np.linalg.norm(vector1 - vector2)
    return distance

print(vector_distance())